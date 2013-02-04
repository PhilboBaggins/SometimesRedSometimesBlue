using System;
using System.Windows.Forms;
using System.Drawing;

namespace SometimesRedSomeTimesBlue
{
    static class Program
    {
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form()
            {
                BackColor = ((new Random()).Next(0, 2) == 0) ? Color.Red : Color.Blue,
                WindowState = FormWindowState.Maximized,
                Text = "Sometimes red, sometimes blue",
            });
        }
    }
}
