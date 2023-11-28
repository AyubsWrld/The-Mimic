#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h> 

int checkBounds(int x, int y);


void moveP(int startPos, int x , int y ) {
    int *ptrY , *ptrX ; 
    ptrY = &y ; ptrX = &x ; 

    switch(startPos) { 
        case 1 : 
            *ptrX = 23; // Starting Location
            *ptrY = 7;
            break;

        case 2 : 
            *ptrX = 40; // Starting Location
            *ptrY = 8;
            break;
            

        case 3 : 
            *ptrX = 45; // Starting Location
            *ptrY = 7;
            break;
            
    } 
    int *p = malloc(sizeof(int)); 

    keypad(stdscr, TRUE); // Initialized the keyboard for getting input 

    refresh();
    char key;

    while ((key = getch()) != 'q') {
        refresh();
        int key = getch();

        if (key == KEY_UP) {  // Move Up
            if (checkBounds(*ptrX,*ptrY-1) == 1){
                mvaddch(*ptrY,*ptrX,' ');
                *ptrY = *ptrY - 1;
            }

        } else if (key == KEY_DOWN ) {  // Move Down
            if (checkBounds(*ptrX, *ptrY + 1) == 1){
                mvaddch(*ptrY,*ptrX,' ');
                *ptrY = *ptrY + 1;
            }

        } else if (key == KEY_RIGHT) {  // Move Right
            if (checkBounds(*ptrX + 1,*ptrY) == 1){
                mvaddch(*ptrY,*ptrX,' ');
                *ptrX = *ptrX + 1;
            }
        } else if (key == KEY_LEFT) {  // Move Right
            if (checkBounds(*ptrX - 1,*ptrY) == 1){
                mvaddch(*ptrY,*ptrX,' ');
                *ptrX = *ptrX - 1;

        
            }
        }
        
        
        mvaddch(*ptrY, *ptrX, 'X');
        
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

int checkObstacle( int x , int y ) { 
    int character = mvinch(y,x);
    if (character == '<' || character == '^' || character == '>' ) {
        return 0 ;  
    }
    else { 
        return 1 ; 
    }
}
int checkObjective( int x , int y ) {  
    int *ptrY , *ptrX ; 
    ptrY = &y ; ptrX = &x ; 
    int character = mvinch(*ptrY,*ptrX);
    if (character == '*') {
        printw("hello") ; 
        return 0 ;  
    }
    else { 
        return 1 ; 
    }
}
