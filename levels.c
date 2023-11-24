#include <ncurses.h>
#include <stdio.h>

int level1();
int level2();
int level3();

int display_level(int i){
	if (i == 1){
		level1();
	}
	else if (i == 2){
		level2();
	}	
	else if (i == 3){
		level3();
	}

	return 0;
}


int level1(){
	clear();

	int height,width,start_y,start_x;
	height = 28;
	width = 70;
 	start_x = 5;
    	start_y = 1;

   	WINDOW * win = newwin(height,width,start_y,start_x);
    	refresh();

    	box(win,0,'-');
	
	mvprintw(0,37,"Level 1");
	
	//Maze Path
	for (int i = 1; i < 45; i++){
		mvwprintw(win,2,i,"~");
	}	
	for (int i = 5; i < 70; i++){
                mvwprintw(win,4,i,"~");
        }
	for (int i = 4; i < 18; i++){
                mvwprintw(win,i,5,"|");
        }
	for (int i = 7; i < 20; i++){
                mvwprintw(win,i,8,"|");
        }
	for (int i = 5; i < 8; i++){
                mvwprintw(win,20,i,"~");
        }


	wrefresh(win);
	return 0;
}

int level2(){
    	clear();

    	int height,width,start_y,start_x;
    	height = 28;
    	width = 70;
    	start_x = 5;
    	start_y = 1;

    	WINDOW * win = newwin(height,width,start_y,start_x);
    	refresh();

    	box(win,0,'-');
    	mvprintw(0,37,"Level 2");
    	wrefresh(win);
	return 0;
}

int level3(){
    	clear();

    	int height,width,start_y,start_x;
    	height = 28;
    	width = 70;
    	start_x = 5;
    	start_y = 1;

    	WINDOW * win = newwin(height,width,start_y,start_x);
    	refresh();

    	box(win,0,'-');
    	mvprintw(0,37,"Level 3");
   	wrefresh(win);
	return 0;
}
