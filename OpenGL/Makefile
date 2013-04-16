CC := gcc
CFLAGS := -Wall -g

all: sometimesredsometimesblue

sometimesredsometimesblue.o: sometimesredsometimesblue.c
	$(CC) $(CFLAGS) -o sometimesredsometimesblue.o -c sometimesredsometimesblue.c

sometimesredsometimesblue: sometimesredsometimesblue.o
	$(CC) $(CFLAGS) -o sometimesredsometimesblue sometimesredsometimesblue.o -lglut

clean:
	rm -f sometimesredsometimesblue
	rm -f sometimesredsometimesblue.o
