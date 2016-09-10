CC := gcc
CFLAGS := -Wall -g
LIBS := -lbsd -lglut -lGL

all: sometimesredsometimesblue

sometimesredsometimesblue.o: sometimesredsometimesblue.c
	$(CC) $(CFLAGS) -c -o $@ $<

sometimesredsometimesblue: sometimesredsometimesblue.o
	$(CC) $(CFLAGS) $(LIBS) -o $@ $<

clean:
	rm -f sometimesredsometimesblue
	rm -f sometimesredsometimesblue.o
