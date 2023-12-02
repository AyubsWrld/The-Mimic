#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
// Function to display the splash screen

void splash_screen() {
        start_color() ;
        clear(); // Clear the screen
        for( int i = 0 ;  i < 4 ; i++ ) {
            printw("\n") ;
        }
        init_pair(1, COLOR_MAGENTA , COLOR_BLACK); 
        init_pair(2, COLOR_CYAN , COLOR_BLACK) ; 
        attron(COLOR_PAIR(1)) ; 
        printw("                                                                                         \n");
        printw("            _________          _______    _______ _________ _______ _________ _______   \n");
        printw("            |__   __/|      /|(  ____ | (       )|__   __/(       )|__   __/(  ____ |  \n");
        printw("               ) (   | )   ( || (     /  | () () |   ) (   | () () |   ) (   | (    |  \n");
        printw("               | |   | (___) || (__      | || || |   | |   | || || |   | |   | |        \n");
        printw("               | |   |  ___  ||  __)     | |(_)| |   | |   | |(_)| |   | |   | |        \n");
        printw("               | |   | (   ) || (        | |   | |   | |   | |   | |   | |   | |        \n");
        printw("               | |   | )   ( || (____/|  | )   ( |___) (___| )   ( |___) (___| (____/|  \n");
        printw("               )_(   |/      |(_______/  |/      | _______/|/      | _______/(______/\n") ;
        printw(" \n");
        attroff(COLOR_PAIR(1)) ;
        attron(COLOR_PAIR(2)) ; 
        printw("                                      Press any key to start...\n");
        attroff(COLOR_PAIR(2)) ; 
        refresh(); // Refresh the screen
        getch();   // Wait for a key press
}