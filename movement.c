#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h> 
#include "main.h"

void moveP(int startPos, int x , int y ) {
    int *ptrY , *ptrX , *ptrOBSX , *ptrOBSY ; 
    int OBSX  = 0 , OBSY = 0 ;  
    ptrOBSX = &OBSX ; ptrOBSY = &OBSY ; 
    ptrY = &y ; ptrX = &x ; 

    switch(startPos) { 
        case 1 : 
            *ptrX = 23; // Starting Location
            *ptrY = 7;
            *ptrOBSX = 47 ; // Coord of the obstacle
            *ptrOBSY = 8;
            break;
        case 2 : 
            *ptrX = 40; // Starting Location
            *ptrY = 8;
            *ptrOBSX = 42 ; // Coord of the obstacle
            *ptrOBSY = 17; 
            break;
        case 3 : 
            *ptrX = 45; // Starting Location
            *ptrY = 8;
            *ptrOBSX = 90 ; // Coord of the obstacle
            *ptrOBSY = 22 ;
            break;
    } 
    keypad(stdscr, TRUE); // Initialized the keyboard for getting input 

    refresh();
    char key; 
    
    while ((key = getch()) != 'q') { // Will keep checking keyboard, and switch to the next level when 'q' is pressed
        int key = getch();
        refresh();

        if (key == KEY_UP) {  // Move Up
            if (checkBounds(*ptrX,*ptrY - 1) == 1){ // Checks if we are in bounds
                if (checkObstacle(*ptrX,*ptrY-1)== 1){ // Checks for an obstacle trigger
                    switch(OBSX) { 
                        case 47 : 
                        for (int i = 0 ; i < 4; i++){ 
                            mvprintw((*ptrOBSY) + i,*ptrOBSX,"         "); // Gets rid of walls to open passage way 
                        }
                        break ; 

                        case 42 :  
                        mvprintw((*ptrOBSY),*ptrOBSX,"               ");
                        break ;
                        
                        case 90 : 
                        for (int i = 0 ; i < 4; i++){
                            mvprintw((*ptrOBSY) + i,*ptrOBSX," ");
                        }
                        break ;
                    }
                   
                }  // That ^^ is to check for possible boundaries, obsatcles, triggers, etc.
                mvaddch(*ptrY,*ptrX,' '); 
                *ptrY = *ptrY - 1; // This moves user by changing the coord of their location
            }

        } else if (key == KEY_DOWN ) {  // Move Down
            if (checkBounds(*ptrX, *ptrY + 1) == 1){
                if (checkObstacle(*ptrX,*ptrY + 1)== 1){ 
                    switch(OBSX) { 
                        case 47 : 
                            for (int i = 0 ; i < 4; i++){ 
                                mvprintw((*ptrOBSY) + i,*ptrOBSX,"         ");
                            }
                            break ; 
                            case 42 :  
                            mvprintw((*ptrOBSY),*ptrOBSX,"               ");
                            break ;
                            
                            case 90 : 
                            for (int i = 0 ; i < 4; i++){
                                mvprintw((*ptrOBSY) + i,*ptrOBSX," ");
                            }
                            break ;
                    }   
                }
                mvaddch(*ptrY,*ptrX,' ');
                *ptrY = *ptrY + 1;
            }

        } else if (key == KEY_RIGHT) {  // Move Right
            if (checkBounds(*ptrX + 1,*ptrY) == 1){
                if (checkObstacle(*ptrX + 1,*ptrY)== 1){
                    switch(OBSX) { 
                        case 47 : 
                            for (int i = 0 ; i < 4; i++){ 
                                mvprintw((*ptrOBSY) + i,*ptrOBSX,"         ");
                            }
                            break ; 
                            case 42 :  
                            mvprintw((*ptrOBSY),*ptrOBSX,"               ");
                            break ;
                            
                            case 90 : 
                            for (int i = 0 ; i < 4; i++){
                                mvprintw((*ptrOBSY) + i,*ptrOBSX," ");
                            }
                            break ;           
                    }
                }
            
                mvaddch(*ptrY,*ptrX,' ');
                *ptrX = *ptrX + 1;
            }
        } else if (key == KEY_LEFT) {  // Move Right
            if (checkBounds(*ptrX - 1,*ptrY) == 1){ 
                if (checkObstacle(*ptrX - 1,*ptrY)== 1){
                    switch(OBSX) { 
                        case 47 : 
                            for (int i = 0 ; i < 4; i++){ 
                                mvprintw((*ptrOBSY) + i,*ptrOBSX,"         ");
                            }
                            break ;

                            case 42 :  
                            mvprintw((*ptrOBSY),*ptrOBSX,"               ");
                            break ;
                            
                            case 90 : 
                            for (int i = 0 ; i < 4; i++){
                                mvprintw((*ptrOBSY) + i,*ptrOBSX," ");
                            }
                            break ;       
                    }     
                }
                mvaddch(*ptrY,*ptrX,' ');
                *ptrX = *ptrX - 1;
            }
        }
        mvaddch(*ptrY, *ptrX, 'X');
        refresh();    
    }
}

int checkBounds(int x, int y) { // Checks if player will hit a wall
    int character = mvinch(y,x);
    if (character == '/' || character == '\\' || character == '_' || character == '-' || character == '|') {
        return 0;
    } else {
        return 1;
    }
}

int checkObstacle( int x , int y ) { // Checks for triggers
    int character = mvinch(y,x);
    if (character == '*') { // Opens up walls in the way
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
    else if(character == '#') { // Reached the end of the level -> Takes user to an end screen
        clear() ; 
        endScr();
        return 0;
    }
    else { 
        return 0 ; 
    }
}