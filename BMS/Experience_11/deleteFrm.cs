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
    public partial class deleteFrm : Form
    {
        public deleteFrm()
        {
            InitializeComponent();
            fresh();
        }

        public void fresh()
        {
            string connectionString = "Server = localhost; Database = master; Trusted_Connection = True";
            SqlConnection conn = new SqlConnection(connectionString);
            choose.Items.Clear();
            try
            {
                conn.Open();
                string sql = "select id from MyDatabase.dbo.library";
                SqlCommand cmd = new SqlCommand(sql, conn);
                SqlDataReader dr = cmd.ExecuteReader();
                while (dr.Read())
                {
                    choose.Items.Add(dr["id"].ToString().Replace(" ", ""));
                }
                dr.Close();
                
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

        private void confirm_Click(object sender, EventArgs e)
        {
            bool flag = false;
            int id = 0xffff;
            try
            {
                id = int.Parse(choose.SelectedItem.ToString());
                flag = true;
            }
            catch(Exception ex)
            {
                MessageBox.Show("请先选择需要删除的id");
            }//判断选择的输入是否合法
            if (flag)
            {
                string connectionString = "Server = localhost; Database = master; Trusted_Connection = True";
                SqlConnection conn = new SqlConnection(connectionString);
                try
                {
                    conn.Open();
                    string sql1 = "select * from MyDatabase.dbo.library where id = " + id;
                    SqlCommand cmd1 = new SqlCommand(sql1, conn);
                    SqlDataReader dr = cmd1.ExecuteReader();
                    while (dr.Read())
                    {
                        string name = dr["name"].ToString().Replace(" ", "");
                        string price = dr["price"].ToString().Replace(" ", "");
                        string author = dr["author"].ToString().Replace(" ", "");
                        string borrower = dr["borrower"].ToString().Replace(" ", "");
                        dr.Close();
                        if(borrower != "")
                        {
                            MessageBox.Show("此书已经被" + borrower + "借阅，请等待归还后删除！");
                        }
                        if (borrower == "")
                        {
                            string temp = "您要删除的书籍信息如下:\n" + "id = " + id + "\n"
                           + "书名：" + name + "\n" + "价格:" + price + "\n" +
                           "作者:" + author + "\n";
                            if (MessageBox.Show(temp + "确定要删除此书吗？\n确定要删除此书吗？\n确定要删除此书吗？\n（重要的事情说三遍）", "删除前确认", MessageBoxButtons.YesNo) == DialogResult.Yes) 
                            {
                                string sql = "delete MyDatabase.dbo.library where id = " + id;
                                SqlCommand cmd = new SqlCommand(sql, conn);
                                cmd.ExecuteNonQuery();
                                MessageBox.Show("删除成功");
                                fresh();
                            }
                        }//给出友好的提示
                        break;
                    }
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
    }
}
