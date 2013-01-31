CC := gcc
CFLAGS := -Wall -g

.PHONY : all clean

all: fbsometimesredsometimesblue

fbsometimesredsometimesblue: fbsometimesredsometimesblue.o
	$(CC) $(CFLAGS) -o fbsometimesredsometimesblue fbsometimesredsometimesblue.o

fbsometimesredsometimesblue.o: fbsometimesredsometimesblue.c
	$(CC) $(CFLAGS) -c -o fbsometimesredsometimesblue.o fbsometimesredsometimesblue.c

clean:
	rm -f fbsometimesredsometimesblue
	rm -f fbsometimesredsometimesblue.o
