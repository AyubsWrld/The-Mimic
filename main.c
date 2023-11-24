#include <stdio.h>
#include <ncurses.h>
#include "main.h"


int main()
{
	splash_screen();
	
	display_level(1);
	
	getch();
	
	endwin();
}
