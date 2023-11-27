#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h> 

int checkBounds(int x, int y);

void moveP() {
    int x = 19; // Starting Location
    int y = 8;
   
    int *p = malloc(sizeof(int)); 

    keypad(stdscr, TRUE); // Initialized the keyboard for getting input 

    refresh();
    char key;

    while ((key = getch()) != 'q') {
        refresh();
        int key = getch();

        if (key == KEY_UP) {  // Move Up
            if (checkBounds(x,y-1) == 1){
                mvaddch(y,x,' ');
                y = y - 1;
            }

        } else if (key == KEY_DOWN ) {  // Move Down
            if (checkBounds(x, y + 1) == 1){
                mvaddch(y,x,' ');
                y = y + 1;
            }

        } else if (key == KEY_RIGHT) {  // Move Right
            if (checkBounds(x + 1,y) == 1){
                mvaddch(y,x,' ');
                x = x + 1;
            }

        } else if (key == KEY_LEFT) { // Move Left
           if (checkBounds(x - 1,y) == 1){
                mvaddch(y,x,' ');
                x = x - 1;
            }
        }
        mvaddch(y, x, 'X');
        refresh();
        getch();
    }
    
    free(p);
}

int checkBounds(int x, int y) {
    int character = mvinch(y,x);
    if (character == '/' || character == '\\' || character == '_' || character == '-') {
        return 0;
    } else {
        return 1;
    }
}
