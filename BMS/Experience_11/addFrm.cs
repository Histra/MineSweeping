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
    public partial class addFrm : Form
    {
        public addFrm()
        {
            InitializeComponent();
        }

        private void confirm_Click(object sender, EventArgs e)
        {
            string name = bookName.Text;
            string price = bookPrice.Text;
            string author = bookAuthor.Text;

            String ConnectionString = @"Server = localhost; Database = master; Trusted_Connection = True";
            SqlConnection conn = new SqlConnection(ConnectionString);
            try
            {
                conn.Open(); 
                string sql1 = "select count(*) from MyDatabase.dbo.library";
                SqlCommand sqlCmd = new SqlCommand(sql1, conn);
                int icount = int.Parse(sqlCmd.ExecuteScalar().ToString());

                string sql = "insert into MyDatabase.dbo.library (id, name, price, author) values (" + (icount + 1) + ",'" 
                    + name + "','" + price + "','" + author + "'" + ")";
               // MessageBox.Show(sql);
                sqlCmd = new SqlCommand(sql, conn);
                sqlCmd.CommandType = CommandType.Text;
                sqlCmd.ExecuteNonQuery();
           
                MessageBox.Show("添加成功！");

            }catch(Exception ex)
            {
                // MessageBox.Show(ex.ToString());
                MessageBox.Show("添加失败！");

            }
            finally
            {
                conn.Close();
                conn.Dispose();    
            }
        }
    }
}
