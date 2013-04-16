using System;

namespace SometimesRedSomeTimesBlue
{
    static class Program
    {
        [STAThread]
        static void Main()
        {
            int counts = 0;
            int red = 0;
            int blue = 0;
            while (counts < 1000 * 1000)
            {
                if ((new Random()).Next(0, 2) == 0)
                {
                    ++red;
                }
                else
                {
                    ++blue;
                }
                counts++;
            }
            Console.WriteLine("Red  = {0}, {1:00.00} percent", red,  (double)red  / counts * 100);
            Console.WriteLine("Blue = {0}, {1:00.00} percent", blue, (double)blue / counts * 100);
        }
    }
}
