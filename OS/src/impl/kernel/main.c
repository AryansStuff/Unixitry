#include "print.h"

void kernel_main() {
    print_clear();
    print_set_color(PRINT_COLOR_BROWN, PRINT_COLOR_BLACK);
    print_monke();
    print_str("Unixitry Booting!");

}

void print_monke(){
    print_str("                         ___ \n");
    print_str("                     .-'`     `'. \n");
    print_str("              __    /  .-. .-.   '' \n");
    print_str("           .'`__`'.| /  ()|  ()/  '' \n");
    print_str("          / /`   `// |_ .-.-. _|  ; \n");
    print_str("          ||     .-'`  (/`|`/) `-./'`__`'. \n");
    print_str("          ||. .'                 `.`  `/ / \n");
    print_str("           `-./  _______            /    || \n");
    print_str("              | |/      ''''---.__   |_./ / \n");
    print_str("              ' / `'---..________/|  /.-'` \n");
    print_str("               `.`._            _/  / \n");
    print_str("                 `-._'-._____.-' _.` \n");
    print_str("                  _,-''.__...--'` \n");
}
