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
    public partial class changeFrm : Form
    {
        public changeFrm()
        {
            InitializeComponent();
            fresh();
        }
        SqlDataAdapter sda;
        DataSet ds;
        public void fresh()
        {
            string connectionString = "Server = localhost; Database = master; Trusted_Connection = True";
            SqlConnection conn = new SqlConnection(connectionString);

            try
            {
                conn.Open();
                string sql = "select * from MyDatabase.dbo.library";
                ds = new DataSet();
                sda = new SqlDataAdapter(sql, conn);
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
        }

        private void confirm_Click(object sender, EventArgs e)
        {
            String connectionString = "Server = localhost; Database = master; Trusted_Connection = True";
            SqlConnection conn = new SqlConnection(connectionString);
            try
            {
                conn.Open();
                for (int  i = 0; i < output.RowCount - 1; i++)
                {
                    string id = output.Rows[i].Cells["id"].EditedFormattedValue.ToString().Replace(" ", "");
                    string name = output.Rows[i].Cells["name"].EditedFormattedValue.ToString().Replace(" ", "");
                    string price = output.Rows[i].Cells["price"].EditedFormattedValue.ToString().Replace(" ", "");
                    string author = output.Rows[i].Cells["author"].EditedFormattedValue.ToString().Replace(" ", "");
                    string borrower = output.Rows[i].Cells["borrower"].EditedFormattedValue.ToString().Replace(" ", "");
                    if (borrower == "")
                        borrower = null; 
                    string sql = "update MyDatabase.dbo.library set name = '" + name + "', price = " + price + ", author = '" + author + "', borrower = '" + borrower + "' where id = " + id;
      
                    SqlCommand cmd = new SqlCommand(sql, conn);
                    cmd.ExecuteNonQuery();
                }
                MessageBox.Show("修改成功！");
                fresh();
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

        private void output_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
            
        }
    }
}
