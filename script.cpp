#include "script.h"
#include <iostream>

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