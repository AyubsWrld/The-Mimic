CC := gcc
CFLAGS := -std=c11 -Wall -lncurses

test: splash.c levels.c main.c
	$(CC) -o $(@) $(CFLAGS) $^

.PHONY: clean

clean:
	rm -f *.o test

