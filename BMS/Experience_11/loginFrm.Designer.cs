namespace Experience_11
{
    partial class loginFrm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.username = new System.Windows.Forms.Label();
            this.userPassword = new System.Windows.Forms.Label();
            this.inputUsername = new System.Windows.Forms.TextBox();
            this.inputUserPassword = new System.Windows.Forms.TextBox();
            this.logining = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // username
            // 
            this.username.AutoSize = true;
            this.username.Font = new System.Drawing.Font("微软雅黑", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.username.Location = new System.Drawing.Point(34, 68);
            this.username.Name = "username";
            this.username.Size = new System.Drawing.Size(64, 24);
            this.username.TabIndex = 5;
            this.username.Text = "用户名";
            // 
            // userPassword
            // 
            this.userPassword.AutoSize = true;
            this.userPassword.Font = new System.Drawing.Font("微软雅黑", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.userPassword.Location = new System.Drawing.Point(34, 120);
            this.userPassword.Name = "userPassword";
            this.userPassword.Size = new System.Drawing.Size(46, 24);
            this.userPassword.TabIndex = 6;
            this.userPassword.Text = "密码";
            // 
            // inputUsername
            // 
            this.inputUsername.Location = new System.Drawing.Point(111, 68);
            this.inputUsername.Name = "inputUsername";
            this.inputUsername.Size = new System.Drawing.Size(216, 28);
            this.inputUsername.TabIndex = 7;
            this.inputUsername.TextChanged += new System.EventHandler(this.inputUsername_TextChanged);
            // 
            // inputUserPassword
            // 
            this.inputUserPassword.Location = new System.Drawing.Point(111, 120);
            this.inputUserPassword.Name = "inputUserPassword";
            this.inputUserPassword.Size = new System.Drawing.Size(216, 28);
            this.inputUserPassword.TabIndex = 8;
            // 
            // logining
            // 
            this.logining.Font = new System.Drawing.Font("微软雅黑", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.logining.Location = new System.Drawing.Point(144, 182);
            this.logining.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.logining.Name = "logining";
            this.logining.Size = new System.Drawing.Size(112, 34);
            this.logining.TabIndex = 9;
            this.logining.Text = "登录";
            this.logining.UseVisualStyleBackColor = true;
            this.logining.Click += new System.EventHandler(this.logining_Click);
            // 
            // loginFrm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(387, 250);
            this.Controls.Add(this.logining);
            this.Controls.Add(this.inputUserPassword);
            this.Controls.Add(this.inputUsername);
            this.Controls.Add(this.userPassword);
            this.Controls.Add(this.username);
            this.Margin = new System.Windows.Forms.Padding(4, 4, 4, 4);
            this.MaximizeBox = false;
            this.Name = "loginFrm";
            this.Text = "登录";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label username;
        private System.Windows.Forms.Label userPassword;
        private System.Windows.Forms.TextBox inputUsername;
        private System.Windows.Forms.TextBox inputUserPassword;
        private System.Windows.Forms.Button logining;
    }
}