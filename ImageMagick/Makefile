EXT := png
RESOLUTION := 800x800

ALL := red.$(EXT) blue.$(EXT)

.PHONY: all clean

all: $(ALL)

red.$(EXT):
	convert -size $(RESOLUTION) xc:red $@

blue.$(EXT):
	convert -size $(RESOLUTION) xc:blue $@

clean:
	rm $(ALL)
