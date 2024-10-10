#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to our 64-bit kernel!\n");
    print_set_color(PRINT_COLOR_LIGHT_BLUE, PRINT_COLOR_BLACK);
    print_str("This is my mini project for letting us how operating systems are working.\n");
    print_set_color(PRINT_COLOR_LIGHT_RED, PRINT_COLOR_BLACK);
    print_str("");
}