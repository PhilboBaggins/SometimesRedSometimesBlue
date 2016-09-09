CC := gcc
CFLAGS := -Wall -g

all: sometimesredsometimesblue

sometimesredsometimesblue.o: sometimesredsometimesblue.c
	$(CC) $(CFLAGS) -c -o $@ $<

sometimesredsometimesblue: sometimesredsometimesblue.o
	$(CC) $(CFLAGS) -lglut -o $@ $<

clean:
	rm -f sometimesredsometimesblue
	rm -f sometimesredsometimesblue.o
