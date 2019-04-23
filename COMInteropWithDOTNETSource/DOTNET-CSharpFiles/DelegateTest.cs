namespace DelegateTest
{
    using System;
    using System.Drawing;
     using System.ComponentModel;
     using System.Windows.Forms;

    public class AngryForm : System.Windows.Forms.Form
    {
        private Container components;
        private System.Windows.Forms.Button AngryButton;

        public AngryForm()
        {
            // Required for Windows Form Designer support
            InitializeComponent();
        }

        /// <summary>
        ///    Clean up any resources being used.
        /// </summary>
        public override void Dispose()
        {
            base.Dispose();
            components.Dispose();
        }

        private void InitializeComponent()
       {
	this.components = new Container ();
	this.AngryButton = new Button ();
	AngryButton.Location = new System.Drawing.Point (8, 16);
	AngryButton.Size = new System.Drawing.Size (112, 40);
	AngryButton.TabIndex = 0;
	AngryButton.Text = "MyButton";
	AngryButton.Click += new System.EventHandler(this.AngryButton_Click);
	this.Text = "Angry Button Delegate Demo";
	this.AutoScaleBaseSize = new System.Drawing.Size (5, 13);
	this.ClientSize = new System.Drawing.Size (136, 77);
	this.Controls.Add(this.AngryButton);
    }

    protected void AngryButton_Click(object sender, System.EventArgs e)
    {
       MessageBox.Show("Please stop clicking me !!");
    }

        /// <summary>
        /// The main entry point for the application.
        /// </summary>
        public static void Main(string[] args) 
        {
            Application.Run(new AngryForm());
        }

    }/* end class */

}/* end namespace */
