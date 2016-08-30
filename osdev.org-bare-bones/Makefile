.PHONY: all run clean

all: boot.iso

boot.iso: os.bin grub.cfg
	mkdir -p isodir/boot/grub
	cp os.bin isodir/boot/os.bin
	cp grub.cfg isodir/boot/grub/grub.cfg
	grub-mkrescue -o boot.iso isodir
	rm -rf isodir/

os.bin: boot.o kernel.o
	i386-elf-gcc -T linker.ld -ffreestanding -O2 -nostdlib -lgcc -o $@ $^

kernel.o: kernel.c
	i386-elf-gcc -std=gnu99 -ffreestanding -O2 -Wall -Wextra -c -o $@ $^

boot.o: boot.s
	i386-elf-as -o $@ $<

run: boot.iso
	qemu-system-i386 -cdrom boot.iso

clean:
	rm -f boot.iso os.bin kernel.o boot.o
	rm -rf isodir
