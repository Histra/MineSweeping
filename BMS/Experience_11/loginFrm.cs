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
    public partial class loginFrm : Form
    {
        User user;
        mainFrm mainfrm;
        public loginFrm(User user, mainFrm mainfrm)
        {
            this.user = user;
            this.mainfrm = mainfrm;
            InitializeComponent();
        }
        private void search_Click(object sender, EventArgs e)
        {
            //string ConnectionString = @"Data Source=(local)\MYSQLSERVER;Initial
            //Catalog=MyDatabase;" + "Integrated Security=True";

           /* String ConnectionString = @"Server = localhost; Database = master; Trusted_Connection = True";
            DataSet dataset = new DataSet(); //创建数据集
                                             //创建一个新连接
            SqlConnection conn = new SqlConnection(ConnectionString);
            try
            {
                conn.Open();
                //创建数据提供者
                SqlDataAdapter DataAdapter = new SqlDataAdapter("SELECT * FROM student1", conn);
                //填充数据集dataset，并为本次填充的数据起名“student_table”
                DataAdapter.Fill(dataset, "student_table");
                student_table.DataSource = dataset;
                //在dataGridView1控件中显示名为student_table的填充数据
                student_table.DataMember = "student_table";
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
            finally
            {
                conn.Close();
                conn.Dispose();
                dataset.Dispose();
            }*/
        }

        private void inputUsername_TextChanged(object sender, EventArgs e)
        {
            
        }

        private void logining_Click(object sender, EventArgs e)
        {
            string username = null;
            username = inputUsername.Text;
            string password = null;
            password = inputUserPassword.Text;
            String ConnectionString = @"Server = localhost; Database = master; Trusted_Connection = True";
            DataSet dataSet = new DataSet();
            SqlConnection conn = new SqlConnection(ConnectionString);
            try
            {
                conn.Open();
                //string sql = " select * from Table  where username ='" + name + "' and pwd = '" + pwd + "'";
                String sql = "select * from MyDatabase.dbo.login where username = '" + username + "' and password = '" + password + "'";
                
                SqlCommand sqlCmd = new SqlCommand(sql, conn);
                bool flag = false;
                SqlDataReader dr = sqlCmd.ExecuteReader();
                while (dr.Read())
                {
                    //可以定义一个类
                    //string user = dr["username"].ToString();
                    //string pwd = dr["password"].ToString();
                    user.name = dr["username"].ToString().Replace(" ", "");
                    user.password = dr["password"].ToString().Replace(" ", "");
                    user.identity = dr["identity"].ToString().Replace(" ", "");
                    user.islogined = true;
                    flag = true;
                    break;
                }
                if (flag)
                {
                    MessageBox.Show("登录成功！");
                    
                    this.Close();
                    mainfrm.Text = "个人书籍管理系统" + "（欢迎您，" + user.name + "[" + user.identity + "]）";
       
                    if (user.identity == "管理员")
                    {
                        mainfrm.setFunction("管理员");
                    }
                    else
                    {
                        if (user.identity == "用户")
                        {
                            mainfrm.setFunction("用户");
                        }
                    }    
                    //mainFrm mainfrm;
                    //mainfrm = (mainFrm)this.Owner;
                    //mainfrm.Text = "ffff";
                }
                else
                {
                    MessageBox.Show("用户名或密码错误！");
                }
            }
            catch (Exception ex)
            {
                //MessageBox.Show(ex.ToString());
            }
            finally
            {
                conn.Close();
                conn.Dispose();
                dataSet.Dispose();
            }
        }
    }
}
