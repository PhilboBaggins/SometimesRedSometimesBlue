using System;
using System.Runtime.InteropServices;

namespace desktop_background_sometimes_red_sometimes_blue
{
    public static class NativeMethods
    {
        // Taken from http://www.pinvoke.net/default.aspx/Enums/SPIF.html
        [Flags]
        public enum SPIF
        {
            None = 0x00,
            /// <summary>Writes the new system-wide parameter setting to the user profile.</summary>
            SPIF_UPDATEINIFILE = 0x01,
            /// <summary>Broadcasts the WM_SETTINGCHANGE message after updating the user profile.</summary>
            SPIF_SENDCHANGE = 0x02,
            /// <summary>Same as SPIF_SENDCHANGE.</summary>
            SPIF_SENDWININICHANGE = 0x02
        }

        //[DllImport("user32.dll", CharSet = CharSet.Auto)]
        //private static extern Int32 SystemParametersInfo(UInt32 action, UInt32 uParam, String vParam, UInt32 winIni);

        // Taken from http://www.pinvoke.net/default.aspx/user32/SystemParametersInfo.html
        [DllImport("user32.dll", CharSet = CharSet.Auto, SetLastError = true)]
        [return: MarshalAs(UnmanagedType.Bool)]
        private static extern bool SystemParametersInfo(uint uiAction, uint uiParam, String pvParam, SPIF fWinIni);

        private const uint SPI_SETDESKWALLPAPER = 0x14;

        public static bool SetWallpaper(string path)
        {
            //if (string.IsNullOrWhiteSpace(path))
            if (string.IsNullOrEmpty(path))
                throw new ArgumentException("What is this silliness?", "path");

            // http://msdn.microsoft.com/en-us/library/windows/desktop/ms724947%28v=vs.85%29.aspx

            //SystemParametersInfo(SPI_SETDESKWALLPAPER, 3, path, SPIF_UPDATEINIFILE | SPIF_SENDWININICHANGE);
            //Int32 retVal = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, path, 0);

            return SystemParametersInfo(SPI_SETDESKWALLPAPER, (uint)0, path, SPIF.None);
        }
    }
}
