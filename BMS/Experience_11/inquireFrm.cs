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
    public partial class inquireFrm : Form
    {
        public inquireFrm()
        {
            InitializeComponent();
        }

        private void confirm_Click(object sender, EventArgs e)
        {
            string ConnectionString = @"Server = localhost; Database = master; Trusted_Connection = True";
            SqlConnection conn = new SqlConnection(ConnectionString);
            DataSet ds = new DataSet();
            try
            {
                conn.Open();
                string sql = "select * from MyDatabase.dbo.library";
                SqlDataAdapter sda = new SqlDataAdapter(sql, conn);
                sda.Fill(ds, "temp");
                show.DataSource = ds;
                show.DataMember = "temp";

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
