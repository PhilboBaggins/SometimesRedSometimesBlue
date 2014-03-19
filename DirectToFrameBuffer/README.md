Sometimes Red, Sometimes Blue direct to a framebuffer near you
==============================================================

Sometimes Red, Sometimes Blue written straight to your framebuffer.

This code was shamelessly stolen from [this Stack Overflow question](http://stackoverflow.com/questions/4996777/paint-pixels-to-screen-via-linux-framebuffer) and modified to provide the classic Sometimes Red, Sometimes Blue pizazz.

As pointed out on the Stack Overflow answers; writing directly to the framebuffer while an X server is running is a bad idea leading to undefined behaviour, burning cats and the end of days. So this application probably shouldn't be used that way, however it could be very useful in the future implementations such as the bootable Sometimes Red, Sometimes Blue operating system.



Building
--------

A make file is provided for building on Linux:

    $ cd SometimesRedSometimesBlue/DirectToFrameBuffer/
    $ make



Running
-------

If the application is run without arguements it will will to /dev/fb0

    $ ./fbsometimesredsometimesblue

or you can specify a framebuffer to write to like this:

    $ ./fbsometimesredsometimesblue /dev/fb1
