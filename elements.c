#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#include "main.h"

int checkBounds(int x, int y) { // Checks if player will hit a wall
    int character = mvinch(y,x);
    if (character == '/' || character == '\\' || character == '_' || character == '-' || character == '|') {
        return 0;
    } else {
        return 1;
    }
}

int checkObstacle(int level ,int x , int y ) { // Checks for triggers
    int character = mvinch(y,x);
    if (character == '*') { // Opens up walls in the way
        if (level == 3){
            nonPlayingChar(level);
            return 1;
        }
        return 1 ;  
    }
    else if(character == '$') { // Different end level triggers tot move to next level
        clear() ; 
        display_level2(2) ; 
        return 0;
    }
    else if(character == '!') { 
        clear() ; 
        display_level3(2) ; 
        return 0;
    }
    else if(character == '@') { // Reached the end of the level -> Takes user to an end screen
        clear() ; 
        endScr();
        return 0;
    }
    else if (x == 100 && y == 19){
        mvprintw(17,113,"          ");
        return 1;
    }
    else { 
        return 0 ; 
    }
}


int nonPlayingChar(int level){
    for (int i = 0; i < 4; i++){
        refresh();
        mvprintw(19+i,110,"~`~");
        cbreak();
        mvprintw(18+i,110,"   ");
        refresh();
    }

    mvprintw(27,100,"{~`~}:Press the pressure plate [V] in the small room above and you shall gain passage");

    return 1;
    
}
