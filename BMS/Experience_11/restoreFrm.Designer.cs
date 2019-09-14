namespace Experience_11
{
    partial class restoreFrm
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
            this.information = new System.Windows.Forms.Label();
            this.output = new System.Windows.Forms.DataGridView();
            this.confirm = new System.Windows.Forms.Button();
            this.inputID = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            ((System.ComponentModel.ISupportInitialize)(this.output)).BeginInit();
            this.SuspendLayout();
            // 
            // information
            // 
            this.information.AutoSize = true;
            this.information.Font = new System.Drawing.Font("微软雅黑", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.information.Location = new System.Drawing.Point(30, 117);
            this.information.Name = "information";
            this.information.Size = new System.Drawing.Size(20, 24);
            this.information.TabIndex = 3;
            this.information.Text = "  ";
            // 
            // output
            // 
            this.output.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.output.Location = new System.Drawing.Point(12, 50);
            this.output.Name = "output";
            this.output.ReadOnly = true;
            this.output.RowTemplate.Height = 30;
            this.output.Size = new System.Drawing.Size(824, 172);
            this.output.TabIndex = 4;
            this.output.CellContentClick += new System.Windows.Forms.DataGridViewCellEventHandler(this.output_CellContentClick);
            // 
            // confirm
            // 
            this.confirm.Font = new System.Drawing.Font("微软雅黑", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.confirm.Location = new System.Drawing.Point(365, 232);
            this.confirm.Name = "confirm";
            this.confirm.Size = new System.Drawing.Size(75, 37);
            this.confirm.TabIndex = 10;
            this.confirm.Text = "归还";
            this.confirm.UseVisualStyleBackColor = true;
            this.confirm.Click += new System.EventHandler(this.confirm_Click);
            // 
            // inputID
            // 
            this.inputID.Location = new System.Drawing.Point(227, 238);
            this.inputID.Name = "inputID";
            this.inputID.Size = new System.Drawing.Size(100, 28);
            this.inputID.TabIndex = 9;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("微软雅黑", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label1.Location = new System.Drawing.Point(13, 238);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(207, 24);
            this.label1.TabIndex = 8;
            this.label1.Text = "请输入您要归还的书的id";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("微软雅黑", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label2.Location = new System.Drawing.Point(13, 13);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(136, 24);
            this.label2.TabIndex = 11;
            this.label2.Text = "您借的书籍有：";
            // 
            // restoreFrm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(9F, 18F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(843, 283);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.confirm);
            this.Controls.Add(this.inputID);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.output);
            this.Controls.Add(this.information);
            this.MaximizeBox = false;
            this.Name = "restoreFrm";
            this.Text = "图书归还";
            ((System.ComponentModel.ISupportInitialize)(this.output)).EndInit();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label information;
        private System.Windows.Forms.DataGridView output;
        private System.Windows.Forms.Button confirm;
        private System.Windows.Forms.TextBox inputID;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
    }
}