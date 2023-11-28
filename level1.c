#include <stdlib.h>
#include <ncurses.h>
#include "main.h"
void display_level1(int state, int initX , int initY) {
    // Set initial position
    start_color() ; 
    init_pair(1,  COLOR_RED , COLOR_BLACK) ;
    init_pair(2, COLOR_CYAN , COLOR_BLACK) ; 
    attron(COLOR_PAIR(2)) ; 
    int y = 1 ;     
    mvprintw(y, 3, "Level 1");
    mvprintw(y + 1, 0, "\t\t\t\t\t\tPlaceholder ... Please press any key to continue viewing the next levels.");
    mvprintw(y + 2, 0, "              ");
    mvprintw(y + 3, 0, "\n");
    mvprintw(y + 4, 0, "\n");
    mvprintw(y + 5 , 0,"           __________________________  _______  _______  _______                 \n");
    mvprintw(y + 6 , 0,"          /\\  ____\\          \\______\\/\\______\\/\\______\\/\\_____  \\               \n"); 
    mvprintw(y + 7 , 0,"          \\ \\ \\                                 *->          \\ \\ \\              \n");
    mvprintw(y + 8 , 0,"           \\ \\ \\    _______  _______  _______  _______  ______\\ \\ \\             \n");
    mvprintw(y + 9 , 0,"            \\ \\ \\_ /\\______\\/\\______\\/\\______\\/\\______\\/\\______\\_\\ \\            \n");
    mvprintw(y + 10 , 0,"             \\ \\___\\/______/\\/______/\\/______/\\/______/\\/______/\\___\\           \n");
    mvprintw(y + 11 , 0,"              \\/___/                                           \\/___/           \n");
    mvprintw(y + 12 , 0,"               /\\  _\\                                           <\\__ \\          \n");
    mvprintw(y + 13 , 0,"               \\ \\ \\/                                           </_/\\ \\         \n");
    mvprintw(y + 14 , 0,"                \\ \\ \\    _______  _______  _______  _______        \\ \\ \\        \n");
    mvprintw(y + 15 , 0,"                 \\ \\ \\_ /\\______\\/\\______\\/\\______\\/\\______\\        \\_\\ \\       \n");
    mvprintw(y + 16 , 0,"                  \\ \\___\\/______/\\/______/\\/______/\\/______/       /\\ ___\\      \n");
    mvprintw(y + 17 , 0,"                   \\/___/_                                         \\/____/_     \n");
    mvprintw(y + 18 , 0,"                     /\\  _\\                                           /\\__ \\    \n");
    mvprintw(y + 19 , 0,"                     \\ \\ \\/                                           \\/_/\\ \\   \n");
    mvprintw(y + 20 , 0,"                      \\ \\ \\             _______  _______  _______  ^^^^^^\\ \\ \\  \n");
    mvprintw(y + 21 , 0,"                       \\ \\ \\_         /\\______\\/\\______\\/\\______\\/\\______\\_\\ \\ \n");
    mvprintw(y + 22 , 0,"                        \\ \\___\\       \\/______/\\/______/\\/______/\\/______/\\___\\ \n");
    mvprintw(y + 23 , 0,"                         \\/___/                                           \\/___/\n");
    mvprintw(y + 24, 0, "\n");
    for (int i = 0; i < 3; i++) {
        mvprintw(y + 25 + i, 0, "\n");
    }
    attroff(COLOR_PAIR(2)) ; 
    attron(COLOR_PAIR(1)) ; 
    mvprintw(y + 29, 0, "                                                .-.   .-..-. .-..----. .----.                            \n");
    mvprintw(y + 30, 0, "                                                | |   | || | | || |_  ' {__                                 \n");
    mvprintw(y + 31, 0, "                                                | `--.| |\\ \\_/ /| {__ .-._} }                              \n");
    mvprintw(y + 32, 0, "                                                `----'`-' `---' `----'`----'                                \n");
    mvprintw(y + 33, 0, "                                 ______                                             ______      \n");
    mvprintw(y + 34, 0, "                                |\\   ___\\                                          |\\___   \\    \n");
    mvprintw(y + 35, 0, "                                \\ \\  \\__|                                          \\|___|\\  \\   \n");
    mvprintw(y + 36, 0, "                                 \\ \\  \\      ,d88b.d88b,   ,d88b.d88b,  ,d88b.d88b,     \\ \\  \\ \n");
    mvprintw(y + 37, 0, "                                  \\ \\  \\     88888888888   88888888888  88888888888      \\.\\  \\ \n");
    mvprintw(y + 38, 0, "                                   \\ \\  \\    `Y8888888Y'   `Y8888888Y'  `Y8888888Y'       \\.\\  \\ \n");
    mvprintw(y + 39, 0, "                                    \\ \\  \\     `Y888Y'       `Y888Y'      `Y888Y'          \\ \\  \\ \n");
    mvprintw(y + 40, 0, "                                     \\ \\  \\      `Y'           `Y'          `Y'             \\ \\  \\  \n");
    mvprintw(y + 41, 0, "                                      \\ \\  \\____                                            _\\_\\  \\ \n");
    mvprintw(y + 42, 0, "                                       \\ \\______\\                                          |\\______\\ \n");
    mvprintw(y + 43, 0, "                                        \\|______|                                          \\|______|\n");
    attroff(COLOR_PAIR(1));
            
        
    getch();

    moveP(1, initX , initY);
    

}
