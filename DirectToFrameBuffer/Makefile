CC := gcc
CFLAGS := -Wall -g
LIBS := -lbsd

.PHONY : all clean

all: fbsometimesredsometimesblue

fbsometimesredsometimesblue: fbsometimesredsometimesblue.o
	$(CC) $(CFLAGS) -o $@ $<

fbsometimesredsometimesblue.o: fbsometimesredsometimesblue.c
	$(CC) $(CFLAGS) $(LIBS) -c -o $@ $<

clean:
	rm -f fbsometimesredsometimesblue
	rm -f fbsometimesredsometimesblue.o
