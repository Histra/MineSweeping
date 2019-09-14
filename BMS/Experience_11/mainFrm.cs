using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Experience_11
{
    public partial class mainFrm : Form
    {
        public mainFrm()
        {
            InitializeComponent();

            this.WindowState = FormWindowState.Maximized;

            add.Enabled = false;
            change.Enabled = false;
            delete.Enabled = false;
            inquire.Enabled = false;
            borrow.Enabled = false;
            restore.Enabled = false;
        }
        User user;
        private void login_Click(object sender, EventArgs e)
        {
            user = new User();
            loginFrm loginfrm = new loginFrm(user, this);
            loginfrm.Show();
            //loginfrm.Owner = this;

        }
        public void fresh()
        {
            if (user.islogined)
            {
                this.Text = "欢迎您，" + user.name + "(" + user.identity + ")";
            }
        }
        private void help_Click(object sender, EventArgs e)
        {
            if (MessageBox.Show("请自行百度", "Sorry", MessageBoxButtons.YesNo) == DialogResult.Yes)
            {
                System.Diagnostics.Process.Start("www.baidu.com");
            }
            else
            {
                MessageBox.Show("已经为您打开cmd", "没想到吧");
                System.Diagnostics.Process.Start("cmd.exe");
            }
        }
        public void setFunction(string userIdentity)
        {
            if (userIdentity == "管理员")
            {
                add.Enabled = true;
                change.Enabled = true;
                delete.Enabled = true;
                inquire.Enabled = true;
                borrow.Enabled = true;
                restore.Enabled = true;
            }
            if (userIdentity == "用户")
            {
                add.Enabled = false;
                change.Enabled = false;
                delete.Enabled = false;
                inquire.Enabled = true;
                borrow.Enabled = true;
                restore.Enabled = true;
            }
        }

        private void add_Click(object sender, EventArgs e)
        {
            addFrm addfrm = new addFrm();
            addfrm.Show();
        }

        private void inquire_Click(object sender, EventArgs e)
        {
            inquireFrm inquirefrm = new inquireFrm();
            inquirefrm.Show();
        }

        private void borrow_Click(object sender, EventArgs e)
        {
            borrowFrm borrowfrm = new borrowFrm(user);
            borrowfrm.Show();
        }

        private void restore_Click(object sender, EventArgs e)
        {
            restoreFrm restorefrm = new restoreFrm(user);
            restorefrm.Show();
        }

        private void delete_Click(object sender, EventArgs e)
        {
            deleteFrm deletefrm = new deleteFrm();
            deletefrm.Show();
        }

        private void change_Click(object sender, EventArgs e)
        {
            changeFrm changefrm = new changeFrm();
            changefrm.Show();
        }

        private void about_Click(object sender, EventArgs e)
        {
            MessageBox.Show("开发者:王刚\n开发日期：2017.12.12\n学号：16020031075", "被你发现啦(*╹▽╹*)");
        }
    }
    public class User{
        public User()
        {
            islogined = false;
        }
        public string name;
        public string password;
        public string identity;
        public bool islogined;
    }
}
