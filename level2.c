#include <stdlib.h>
#include <ncurses.h>
#include "main.h"

void display_level2(int state) {
    int y = 1 ; 
    mvprintw(y, 3 , "level 2") ;  
    mvprintw(y + 1 , 0 , "\t\t\t\t\tPlaceholder ... Please press any key to continue viewing the next levels .") ; 
    mvprintw(y + 2 , 0 , "                                                                      \n");
    mvprintw(y + 4 , 0 , "                                                                      \n");
    mvprintw(y + 6 , 0 , " .                  ___________________________________________                          \n");
    mvprintw(y + 7 , 0 , "                   |\\____________\\                |\\____________\\                        \n");
    mvprintw(y + 8 , 0 , "                   \\|____________|                \\|____________|                        \n");
    mvprintw(y + 9 , 0 , "                   |\\   ___\\                            |\\___   \\                        \n");
    mvprintw(y + 10 , 0 , "                   \\ \\  \\__|                            \\|___|\\  \\                       \n");
    mvprintw(y + 11 , 0 , "                    \\ \\  \\      *                            \\ \\  \\                      \n");
    mvprintw(y + 12 , 0 , "                     \\ \\  \\____                              _\\_\\  \\                     \n");
    mvprintw(y + 13 , 0 , "                      \\ \\______\\______                   ___|\\______\\                    \n");
    mvprintw(y + 14 , 0 , "                       \\|______|\\___   \\                |\\  \\|______|                    \n");
    mvprintw(y + 15 , 0 , "                               \\|___|\\  \\               \\ \\  \\                           \n");
    mvprintw(y + 16 , 0 , "                                    \\ \\  \\<|^_________^|>\\ \\  \\                          \n");
    mvprintw(y + 17 , 0 , "                                    _\\_\\  \\               \\ \\  \\____                     \n");
    mvprintw(y + 18 , 0 , "                                   |\\______\\               \\ \\_______\\                   \n");
    mvprintw(y + 19 , 0 , "                                ___\\|______|                \\|_______|_____              \n");
    mvprintw(y + 20 , 0 , "                               |\\   ___\\                            |\\___   \\            \n");
    mvprintw(y + 21 , 0 , "                               \\ \\  \\__|                            \\|___|\\  \\           \n");
    mvprintw(y + 22 , 0 , "                                \\ \\  \\                                   \\ \\  \\          \n");
    mvprintw(y + 23 , 0 , "                                 \\ \\  \\____           !                  _\\_\\  \\         \n");
    mvprintw(y + 24 , 0 , "                                  \\ \\______\\                            |\\______\\        \n");
    mvprintw(y + 25 , 0 , "                                   \\|______|                            \\|______|        \n");
    
    for(int i = 0  ; i < 3 ; i ++) {  
        mvprintw(y + 26 + i, 0, "\n");
    }
    mvprintw(y + 30 , 0, "                                                .-.   .-..-. .-..----. .----.                            \n"); 
    mvprintw(y + 31 , 0, "                                                | |   | || | | || |_  ' {__                                 \n"); 
    mvprintw(y + 32 , 0, "                                                | `--.| |\\ \\_/ /| {__ .-._} }                              \n"); 
    mvprintw(y + 33 , 0, "                                                `----'`-' `---' `----'`----'                                \n");                                                                                                                                           
    mvprintw(y + 34 , 0, "                                 ______                                             ______      \n"); 
    mvprintw(y + 35 , 0, "                                |\\   ___\\                                          |\\___   \\    \n"); 
    mvprintw(y + 36 , 0, "                                \\ \\  \\__|                                          \\|___|\\  \\   \n"); 
    mvprintw(y + 37 , 0, "                                 \\ \\  \\      ,d88b.d88b,   ,d88b.d88b,  ,d88b.d88b,     \\ \\  \\ \n"); 
    mvprintw(y + 38 , 0, "                                  \\ \\  \\     88888888888   88888888888  88888888888      \\.\\  \\ \n"); 
    mvprintw(y + 39 , 0, "                                   \\ \\  \\    `Y8888888Y'   `Y8888888Y'  `Y8888888Y'       \\.\\  \\ \n"); 
    mvprintw(y + 40 , 0, "                                    \\ \\  \\     `Y888Y'       `Y888Y'      `Y888Y'          \\ \\  \\ \n"); 
    mvprintw(y + 41 , 0, "                                     \\ \\  \\      `Y'           `Y'          `Y'             \\ \\  \\  \n"); 
    mvprintw(y + 42 , 0, "                                      \\ \\  \\____                                            _\\_\\  \\ \n"); 
    mvprintw(y + 43 , 0, "                                       \\ \\______\\                                          |\\______\\ \n"); 
    mvprintw(y + 44 , 0, "                                        \\|______|                                          \\|______|\n"); 
    
    getch();  
    moveP(2, 0 , 0);
}