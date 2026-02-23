#include "script.h"
#include <iostream>

int main() {
    int choice;

    while (true) {
        std::cout << "What would you want to do?" << std::endl << std::endl;
        std::cout << "1. Update the system" << std::endl;
        std::cout << "2. Enable HDD Sleep for /dev/sda drive on Debian based system (tested on Ubuntu) NOT IMPLEMENTED YET" << std::endl;
        std::cout << "3. Reboot system" << std::endl;
        std::cout << "4. Fastfetch/Neofetch your system" << std::endl;
        std::cout << "5. Install samba and insert samba config and configure samba server (Configured for root user)" << std::endl;
        std::cout << "6. Install AMP (A Server Management Panel) (MAKE SURE UR LOGGED IN AS sudo su -)" << std::endl;
        std::cout << "7. Install screen, openssh-server, cockpit, cockpit-machines and default-jdk" << std::endl;
        std::cout << "8. Upgrade Ubuntu" << std::endl;
        std::cout << "9. Exit the tool" << std::endl;

        std::cout << "Enter your choice (1-9): ";

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