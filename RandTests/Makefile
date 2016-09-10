.PHONY : all fun clean

all: c_rand_test mono_test.exe arc4random-test

c_rand_test: c_rand_test.c
	gcc -Wall -lglut -o $@ $<

mono_test.exe: mono_test.cs
	gmcs -r:System.Windows.Forms.dll -r:System.Drawing.dll -out:mono_test.exe mono_test.cs

arc4random-test: arc4random-test.c
	gcc -lbsd -o $@ $<

fun: arc4random-test
	watch -n0.5 ./arc4random-test

clean:
	rm -f c_rand_test
	rm -f mono_test.exe
	rm -f arc4random-test
