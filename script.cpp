#include "script.h"
#include <iostream>

void show_menu_options() {
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
}

void write_to_hdd_sleep() {
    system("sudo apt update && sudo apt install hd-idle -y");
}


void samba()
{
    system("sudo apt install samba -y");        

    std::cout << "Do you have an samba-config to copy? (y/n): ";
    char answer;
    std::cin >> answer;

    if(answer == 'y') {
        std::cout << "Where is the file located?";
        std::string smb_file;
        std::cin >> smb_file;
        system(("sudo cp " + smb_file + " /etc/samba/smb.conf").c_str());

    }

    system("sudo smbpasswd -a root");
    system("sudo systemctl restart smbd");
    system("sudo systemctl restart smb");
}

void amp_installer() {

    system("bash <(curl -fsSL getamp.sh)");
}

void tools_installer() {
    system("sudo apt update && sudo apt install screen openssh-server cockpit cockpit-machines default-jdk -y");
}


void fetchy() {
    system("fastfetch");
    system("neofetch");
}

void reboot() {
    system("sudo reboot");
}

void system_update() {
    system("sudo apt update && sudo apt upgrade -y");
}

void system_upgrade() {
    system("sudo do-release-upgrade");
}