using System;
using System.Drawing;
using System.Windows.Forms;

namespace desktop_background_sometimes_red_sometimes_blue
{
    internal class Program
    {
        private const string SAVE_PATH = @"C:\Users\phil\BTSync\Projects\1_Software\SometimesRedSometimesBlue\DesktopBackgroung\sometimes-red-sometimes-blue.bmp";

        private static void Main(string[] args)
        {
            //Color colour = ((new Random()).Next(0, 2) == 0) ? Color.Red : Color.Blue;
            //Color colour = Color.Red;
            Color colour = Color.Blue;

            int screenWidth = Screen.PrimaryScreen.Bounds.Width;
            int screenHeight = Screen.PrimaryScreen.Bounds.Height;

            using (Bitmap b = new Bitmap(screenWidth, screenHeight))
            using (Graphics g = Graphics.FromImage(b))
            {
                g.FillRectangle(new SolidBrush(colour), 0, 0, screenWidth, screenHeight);
                b.Save(SAVE_PATH);
                bool success = NativeMethods.SetWallpaper(SAVE_PATH);
            }
        }
    }
}
