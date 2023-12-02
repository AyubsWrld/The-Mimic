#include <stdlib.h>
#include <ncurses.h>
#include "main.h"


void display_level(int level) {
    clear(); // Clear the screen

    // Display level content
    
    if (level == 1){
         display_level1(2); 
    }

    else if (level == 2){ 
         display_level2(2); 
    }
    
    else if (level == 3){
         display_level3(2); 
    }   

    refresh(); // Refresh the screen
}