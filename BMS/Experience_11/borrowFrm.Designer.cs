namespace Experience_11
{
    partial class borrowFrm
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
            this.label1 = new System.Windows.Forms.Label();
            this.inputID = new System.Windows.Forms.TextBox();
            this.confirm = new System.Windows.Forms.Button();
            this.information = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("微软雅黑", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label1.Location = new System.Drawing.Point(12, 28);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(225, 24);
            this.label1.TabIndex = 0;
            this.label1.Text = "请输入需要借阅的书籍的id";
            // 
            // inputID
            // 
            this.inputID.Location = new System.Drawing.Point(243, 29);
            this.inputID.Name = "inputID";
            this.inputID.Size = new System.Drawing.Size(119, 28);
            this.inputID.TabIndex = 1;
            // 
            // confirm
            // 
            this.confirm.Font = new System.Drawing.Font("微软雅黑", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.confirm.Location = new System.Drawing.Point(140, 71);
            this.confirm.Name = "confirm";
            this.confirm.Size = new System.Drawing.Size(75, 40);
            this.confirm.TabIndex = 2;
            this.confirm.Text = "借阅";
            this.confirm.UseVisualStyleBackColor = true;
            this.confirm.Click += new System.EventHandler(this.confirm_Click);
            // 
            // information
            // 
            this.information.AutoSize = true;
            this.information.Location = new System.Drawing.Point(13, 127);
            this.information.Name = "information";
            this.information.Size = new System.Drawing.Size(17, 18);
            this.information.TabIndex = 3;
            this.information.Text = " ";
            // 
            // borrowFrm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(374, 248);
            this.Controls.Add(this.information);
            this.Controls.Add(this.confirm);
            this.Controls.Add(this.inputID);
            this.Controls.Add(this.label1);
            this.MaximizeBox = false;
            this.Name = "borrowFrm";
            this.Text = "图书借阅";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox inputID;
        private System.Windows.Forms.Button confirm;
        private System.Windows.Forms.Label information;
    }
}