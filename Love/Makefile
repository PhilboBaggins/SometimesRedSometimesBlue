SOURCES := main.lua conf.lua
GAME_NAME := SomtimesRedSometimesBlue

LOVE_PACKAGE := bin/$(GAME_NAME).love

LOVE_BIN := $(shell which love)
ifeq ($(LOVE_BIN),)
$(warning Love binary not found, unable to make Linux binary)
LINUX_EXECUTABLE :=
else
LINUX_EXECUTABLE := bin/$(GAME_NAME).bin
endif

.PHONY : all clean

all: $(LOVE_PACKAGE) $(LINUX_EXECUTABLE)

$(LOVE_PACKAGE): $(SOURCES)
	mkdir -p bin/
	zip $(LOVE_PACKAGE) $(SOURCES)

$(LINUX_EXECUTABLE): $(LOVE_PACKAGE)
	cat $(LOVE_BIN) $(LOVE_PACKAGE) > $(LINUX_EXECUTABLE)
	chmod +x $(LINUX_EXECUTABLE)

clean:
	rm -rf bin/
