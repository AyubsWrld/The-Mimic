#include <stdio.h>
#include <ncurses.h>
#include "main.h"

int move(){
      
    keypad(stdscr, TRUE)

    int x = 10;
    int y = 10;

    refresh();
    
    while(true){
        int key = getch();

        if (key = KEY_UP){
            y = y - 1;
            break;       
        }
        if else ( = KEY_DOWN){
            y = y + 1;
            break;        

        }
        if else (ch = KEY_RIGHT){
            x = x + 1;
            break;        
        }
        if else (ch = KEY_LEFT){
            x = x - 1;
            break;
        }
        mvaddch(y,x,"X")
        
    }


}  