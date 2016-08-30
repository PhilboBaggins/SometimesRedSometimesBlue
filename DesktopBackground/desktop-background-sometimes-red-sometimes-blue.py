#!/usr/bin/env python
# -*- coding: utf8 -*-

#------------------------------------------------------------------------------
# Name:        ???????
# Purpose:
#
# Author:      phil
#
# Created:     2014-04-04
# Copyright:   (c) phil 2014
# License:     <your licence>
#------------------------------------------------------------------------------

__description__ = '???'
__version__ = '0.0.1'
__author__ = 'phil'
__date__ = '2014-04-04'
__licence__ = '???'

# This script ses the Python Image Library (PIL)
#     $ pip install pil

import Image
import random
import Tkinter


def SetBackgroundImageWin(fName):
    import ctypes
    SPI_SETDESKWALLPAPER = 0x14
    ctypes.windll.user32.SystemParametersInfoA(SPI_SETDESKWALLPAPER,
                                               0, fName, 0)


def SetBackgroundImageGnome(fName):
    # See http://stackoverflow.com/questions/1977694/change-desktop-background
    pass


def GetScreenSize():
    root = Tkinter.Tk()
    screen_width = root.winfo_screenwidth()
    screen_height = root.winfo_screenheight()
    return (screen_width, screen_height)


def main(verbose=0):
    bgImageFName = 'sometimes-red-sometimes-blue.bmp'
    screensize = GetScreenSize()

    color = random.choice(["#FF0000", "#0000FF"])
    #color = random.choice(["red", "blue"])

    img = Image.new("RGB", screensize, color)
    img.save(bgImageFName)

    SetBackgroundImageWin(bgImageFName)
    #SetBackgroundImageGnome(bgImageFName)


if __name__ == '__main__':
    main()
