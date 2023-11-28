#include <stdlib.h>
#include <ncurses.h>
#include "main.h"

int level_1_X = 0 , level_1_Y = 0 , level_2_X = 0 , level_2_Y = 0 , level_3_X = 0 , level_3_Y = 0 ;

void display_level(int level) {
    clear(); // Clear the screen

    // Display level content (modify as needed)
    
    if (level == 1){
         display_level1(2 , level_1_X , level_1_Y); 
    }

    else if (level == 2){ 
         display_level2(2 , level_2_X , level_2_Y); 
        
    }
    
    else if (level == 3){
         display_level3(2 , level_3_X , level_3_Y); 
        
        
    }   
    // Add your level design, boundaries, objects, etc.

    refresh(); // Refresh the screen
}
