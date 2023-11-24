#include <stdlib.h>
#include <ncurses.h>
#include "main.h"

void display_level(int level) {
    clear(); // Clear the screen

    // Display level content (modify as needed)
    
    if (level == 1){ 
        display_level1(); 
    }

    else if (level == 2){ 
        display_level2();
    }
    
    else if (level == 3){
        display_level3(); 
    }   
    // Add your level design, boundaries, objects, etc.

    refresh(); // Refresh the screen
}
