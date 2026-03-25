#include "script.h"
#include <iostream>

int main() {
    int choice;

    while (true) {
        show_menu_options();

        std::cin >> choice;
        
        switch (choice) {
        case 1:
            system_update();
            break;
        case 2:
            write_to_hdd_sleep();
            break;
        case 3:
            reboot();
            break;
        case 4:
            fetchy();
            break;
        case 5:
            samba();
            break;
        case 6:
            amp_installer();
            break;
        case 7:
            tools_installer();
            break;
        case 8:
            system_upgrade();
            break;
        case 9:
            exit(0);
        default:
            std::cout << std::endl << "\033[31mWrong choice, try again\033[0m\n" << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << std::endl;
            break;
        }
    }
}