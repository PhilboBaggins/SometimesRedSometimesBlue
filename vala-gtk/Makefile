SRC_FILE := somtimesredsometimesblue.vala
BINARIES := somtimesredsometimesblue-gtk2 somtimesredsometimesblue-gtk3

.PHONY: all clean

all: $(BINARIES)

somtimesredsometimesblue-gtk2: $(SRC_FILE)
	valac --pkg gtk+-2.0 -o $@ $<

somtimesredsometimesblue-gtk3: $(SRC_FILE)
	valac --pkg gtk+-3.0 -o $@ $<

clean:
	rm -f $(BINARIES)
