CPP := g++
CFLAGS := -Wall -g

all: sometimesredsometimesblue

sometimesredsometimesblue.o: sometimesredsometimesblue.cpp
	$(CPP) $(CFLAGS) -c -o $@ $^

sometimesredsometimesblue: sometimesredsometimesblue.o
	$(CPP) $(CFLAGS) -lsfml-system -o $@ $^

clean:
	rm -f sometimesredsometimesblue
	rm -f sometimesredsometimesblue.o
