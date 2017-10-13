CC := gcc
CFLAGS := -Wall -O3

#ifeq ($(shell test $$RANDOM -gt 16383; echo $$?),1)

ifeq ($(shell awk 'BEGIN{srand(); printf("%d", 2*rand())}'),0)
RANDOM_COLOUR := red
else
RANDOM_COLOUR := blue
endif

define C_SOURCE_CODE
#include <stdio.h>

int main()
{
    puts("Hello $(RANDOM_COLOUR) world");
    return 0;
}
endef
export C_SOURCE_CODE

all: main

main: main.c
	gcc $(CFLAGS) -o $@ $<

main.c:
	echo "$$C_SOURCE_CODE" > $@

clean:
	rm -f main
	rm -f main.c
