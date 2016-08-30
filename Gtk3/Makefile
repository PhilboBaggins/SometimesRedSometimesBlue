CC := gcc
CFLAGS := -Wall -g `pkg-config --cflags gtk+-3.0`
LIBS := -lbsd `pkg-config --libs gtk+-3.0`
NAME := sometimesredsometimesblue-gtk3

all: $(NAME)

$(NAME).o: $(NAME).c
	$(CC) $(CFLAGS) -c -o $@ $<

$(NAME): $(NAME).o
	$(CC) $(CFLAGS) $(LIBS) -o $@ $<

clean:
	rm -f $(NAME)
	rm -f $(NAME).o
