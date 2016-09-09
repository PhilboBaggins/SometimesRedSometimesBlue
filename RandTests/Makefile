.PHONY : clean

all: c_rand_test mono_test.exe

c_rand_test: c_rand_test.c
	gcc -Wall -lglut -o $@ $<

mono_test.exe: mono_test.cs
	gmcs -r:System.Windows.Forms.dll -r:System.Drawing.dll -out:mono_test.exe mono_test.cs

clean:
	rm -f c_rand_test
	rm -f mono_test.exe
