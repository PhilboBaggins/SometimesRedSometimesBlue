#!/usr/bin/env python
#-------------------------------------------------------------------------------
# Name:        Sometimes red, sometimes blue
# Purpose:     A desktop recreation of www.sometimesredsometimesblue.com
# Author:      phil
# Created:     2011-09-14
# Copyright:   (c) phil 2011
# Licence:     <your licence>
#-------------------------------------------------------------------------------

import random
import Tkinter

color = random.choice(["#FFF000000", "#000000FFF"])
root = Tkinter.Tk()
root.state("zoomed")
canvas = Tkinter.Canvas(root, width=root.winfo_screenwidth(), 
                        height=root.winfo_screenheight(), background=color)
canvas.pack()
Tkinter.mainloop()
