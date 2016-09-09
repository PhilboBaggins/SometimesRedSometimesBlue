CC := gcc
CFLAGS := -Wall -g

.PHONY : all clean

all: fbsometimesredsometimesblue

fbsometimesredsometimesblue: fbsometimesredsometimesblue.o
	$(CC) $(CFLAGS) -o $@ $<

fbsometimesredsometimesblue.o: fbsometimesredsometimesblue.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f fbsometimesredsometimesblue
	rm -f fbsometimesredsometimesblue.o
