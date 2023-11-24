#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>
// Function to display the splash screen

void splash_screen() {
        clear(); // Clear the screen
        for( int i = 0 ;  i < 4 ; i++ ) {
            printw("\n") ;
        }
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
        printw("                                      Press any key to start...\n");
        refresh(); // Refresh the screen
        getch();   // Wait for a key press
}

