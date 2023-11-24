#include <ncurses.h>
#include <stdio.h>

int splash_screen(){
    	initscr();
	
    	int height,width,start_y,start_x;
    	height = 20;
    	width = 40;
    	start_x = 20;
    	start_y = 5;

    	WINDOW * win = newwin(height,width,start_y,start_x);
    	refresh();

    	box(win,0,-1);
    
  	mvwprintw(win,3,8,"Welcome to the Maze Runner");
  	mvwprintw(win,6,7,"Escape Before Time Runs Out!");

	wrefresh(win);

    	int c = getch();
    	printw("%i",c);
    	return 0;
}
