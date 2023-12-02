#include <ncurses.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
int main() {
    initscr(); // Initialize the ncurses library
    cbreak();  // Disable line buffering
    noecho();  // Disable automatic echoing of typed characters
    keypad(stdscr, TRUE); // Enable special keys
    start_color() ;

    splash_screen(); // Display the splash screen

    // Display the first level

    display_level(1);
    display_level(2);
    display_level(3);

    getch(); // Wait for a key press before exiting

    endwin(); // Clean up and close the ncurses library

    return 0;
}