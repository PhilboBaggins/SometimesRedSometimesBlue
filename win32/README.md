Sometimes Red, Sometimes Blue with win32
========================================

A desktop GUI implementation Sometimes Red, Sometimes Blue win32 written in C using the win32 API.



Building
--------

To build on Linux you need to the mingw32 development files and you need to have i586-mingw32msvc-gcc and amd64-mingw32msvc-gcc in you $PATH. On Debian you can achieve all of this by installing the gcc-mingw32 package:

    $ sudo apt-get install gcc-mingw32

Then you can use the provided make file to build both 32-bit and 64-bit executables:

    $ cd SometimesRedSometimesBlue/win32/
    $ make



Reference
---------

* http://winapi.freetechsecrets.com/win32/WIN32Window_Background.htm
* http://msdn.microsoft.com/en-us/library/bb384843.aspx
* http://www.fredosaurus.com/notes-cpp/misc/random.html
