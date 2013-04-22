CPP := g++
CFLAGS := -Wall -g

all: sometimesredsometimesblue

sometimesredsometimesblue.o: sometimesredsometimesblue.cpp
	$(CPP) $(CFLAGS) -o sometimesredsometimesblue.o -c sometimesredsometimesblue.cpp

sometimesredsometimesblue: sometimesredsometimesblue.o
	$(CPP) $(CFLAGS) -o sometimesredsometimesblue sometimesredsometimesblue.o -lsfml-system

clean:
	rm -f sometimesredsometimesblue
	rm -f sometimesredsometimesblue.o
