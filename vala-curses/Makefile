VALAC_FLAGS := -g
EXECUTABLE := sometimesredsometimesblue-vala-curses

all: $(EXECUTABLE)

$(EXECUTABLE): sometimesredsometimesblue.vala
	valac $(VALAC_FLAGS) --pkg curses -X -lncurses -o $@ $<

clean:
	rm -f $(EXECUTABLE)
