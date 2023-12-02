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
            *ptrOBSX = 47 ; 
            *ptrOBSY = 8;
            break;
        case 2 : 
            *ptrX = 40; // Starting Location
            *ptrY = 8;
            *ptrOBSX = 42 ; 
            *ptrOBSY = 17; 
            break;
        case 3 : 
            *ptrX = 45; // Starting Location
            *ptrY = 8;
            *ptrOBSX = 90 ; 
            *ptrOBSY = 22 ;
            break;
    } 
    keypad(stdscr, TRUE); // Initialized the keyboard for getting input 

    refresh();
    char key; 
    
    while ((key = getch()) != 'q') {
        int key = getch();
        refresh();

        if (key == KEY_UP) {  // Move Up
            if (checkBounds(*ptrX,*ptrY - 1) == 1){
                if (checkObstacle(*ptrX,*ptrY-1)== 1){
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
                *ptrY = *ptrY - 1;
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

int checkBounds(int x, int y) {
    int character = mvinch(y,x);
    if (character == '/' || character == '\\' || character == '_' || character == '-' || character == '|') {
        return 0;
    } else {
        return 1;
    }
}

int checkObstacle( int x , int y ) { 
    int character = mvinch(y,x);
    if (character == '*') {
        return 1 ;  
    }
    else if(character == '$') { 
        clear() ; 
        display_level2(2) ; 
        return 0;
    }
    else if(character == '!') { 
        clear() ; 
        display_level3(2) ; 
        return 0;
    }
    else if(character == '#') { 
        clear() ; 
        printw("CONGRATS") ;
        return 0;
    }
    else { 
        return 0 ; 
    }
}