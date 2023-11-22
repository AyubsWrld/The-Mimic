CC := gcc 
CFLAGS := -Wall -std=c11 
LDFLAGS := -lm -lc -lncurses 

my_program : main.c 
	$(CC) $(CFLAGS) $(LDFLAGS)  $^  -o $@ 

.PHONY: clean 

clean : 
	rm -f my_program

