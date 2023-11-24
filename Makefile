CC := gcc 
CFLAGS := -Wall -std=c11 
LDFLAGS := -lm -lc -lncurses

my_program : main.c splash.c level1.c level2.c level3.c displayLevels.c 
	$(CC) $(CFLAGS) $(LDFLAGS)  $^  -o $@

.PHONY: clean 

clean : 
	rm -f my_program

