
// Project: SometimesRedSometimesBlue
// Created: 2014-10-06

// set window properties
SetWindowTitle("Sometime red, sometimes blue")
SetScreenResolution(1024, 768, 0
SetVirtualResolution(1024, 768)

rand = Random (0, 1)

if (rand = 0)
    SetClearColor (255, 0, 0) // Red
else
    SetClearColor (0, 0, 255) // Blue
endif

do
    Sync()
loop
