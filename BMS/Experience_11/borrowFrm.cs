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
    public partial class borrowFrm : Form
    {
        User user;
        public borrowFrm(User user)
        {
            this.user = user;
            InitializeComponent();
        }

        private void confirm_Click(object sender, EventArgs e)
        {
            int id = 0xffff;
            bool flag = true;
            try
            {
                id = int.Parse(inputID.Text);
            }catch(Exception ex)
            {
                MessageBox.Show("请输入正确的id");
                flag = false;
            }//判断输入是否合法
            if (flag)
            {
                string connectionString = "Server = localhost; Database = master; Trusted_Connection = True";
                SqlConnection conn = new SqlConnection(connectionString);

                try
                {
                    conn.Open();
                    string sql = "select * from MyDatabase.dbo.library where id =" + id;
                    SqlCommand cmd = new SqlCommand(sql, conn);
                    SqlDataReader dr = cmd.ExecuteReader();
                    bool flag1 = false;
                    while (dr.Read())
                    {
                        flag1 = true;
                        string name;
                        string price;
                        string author;
                        string borrower;
                        name = dr["name"].ToString().Replace(" ", "");
                        price = dr["price"].ToString().Replace(" ", "");
                        author = dr["author"].ToString().Replace(" ", "");
                        borrower = dr["borrower"].ToString().Replace(" ", "");
                        dr.Close();
                        if (borrower != "")
                        {
                            information.Text = "书名：" + name + "\n" +
                            "价格：" + price + "\n" +
                            "作者：" + author + "\n" +
                            "借阅人:" + borrower + "\n";
                            MessageBox.Show("此书已经被" + borrower + "借阅");
                        
                        }//给出友好提示
                        else{
                            information.Text = "书名：" + name + "\n" +
                            "价格：" + price + "\n" +
                            "作者：" + author + "\n";
                            string sql1 = "update MyDatabase.dbo.library set borrower = '" + user.name + "' where id =" + id;
                            SqlCommand cmd1 = new SqlCommand(sql1, conn);
                            cmd1.ExecuteNonQuery();
                            MessageBox.Show("借阅成功！");
                        }
                        break;
                    }
                    if (!flag1)
                    {
                        MessageBox.Show("这本书好像不存在的~");
                    }//给出友好提示

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
            }
           
        }
    }
}
