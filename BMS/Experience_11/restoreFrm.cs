using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Data.SqlClient;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Experience_11
{
    public partial class restoreFrm : Form
    {
        User user;
        public restoreFrm(User user)
        {
            this.user = user;
            InitializeComponent();
            fresh();
        }
        
        public void fresh()
        {
            string connectionString = "Server = localhost; Database = master; Trusted_Connection = True";
            SqlConnection conn = new SqlConnection(connectionString);

            try
            {
                conn.Open();
                string sql = "select * from MyDatabase.dbo.library where borrower = '" + user.name + "'";
                DataSet ds = new DataSet();
                SqlDataAdapter sda = new SqlDataAdapter(sql, conn);
                sda.Fill(ds, "temp");
                output.DataSource = ds;
                output.DataMember = "temp";
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            finally
            {
                conn.Close();
                conn.Dispose();
            }
        }//用于更新表中数据

        private void confirm_Click(object sender, EventArgs e)
        {
            int id = 0xffff;
            bool flag = true;
            try
            {
                id = int.Parse(inputID.Text);
            }catch(Exception ex)
            {
                MessageBox.Show("请输入正确的id（一次只允许输入一个id）");
                flag = false;
            }//判断输入的合法性
            if (flag)
            {
                string connectionString = "Server = localhost; Database = master; Trusted_Connection = True";
                SqlConnection conn = new SqlConnection(connectionString);

                try
                {
                    conn.Open();
                    string sql = "select borrower from MyDatabase.dbo.library where id = " + id ;
                    SqlCommand cmd = new SqlCommand(sql, conn);
                    SqlDataReader dr = cmd.ExecuteReader();
                    bool flag1 = false;
                    while (dr.Read())
                    {
                        string tempUsername = dr["borrower"].ToString().Replace(" ", "");
                        if (tempUsername == user.name)
                        {
                            flag1 = true;
                            //未写user所借的书的归还
                            dr.Close();
                            string sql1 = "update MyDatabase.dbo.library set borrower = NULL where id = " + id;
                            SqlCommand cmd1 = new SqlCommand(sql1, conn);
                            cmd1.ExecuteNonQuery();
                            MessageBox.Show("归还成功！");
                            fresh();
                            break;
                        }
                    }//获取数据
                    if (!flag1)
                    {
                        MessageBox.Show("您未借阅这本书");
                    }//输出友好提示
                }
                catch(Exception ex)
                {
                    MessageBox.Show(ex.ToString());
                }
                finally
                {
                    conn.Close();
                    conn.Dispose();
                }
            }
        }

        private void output_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }
    }
}
