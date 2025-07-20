#include"player.h"
#include<iostream>
void createCharacter(player& p);
void start() {
    int choice;
    std::cout << "1.Continue\n2.new character " << std::endl;
    std::cin >> choice;
    switch (choice) {
    case 1:
        // Add logic for continue here
        break;
    case 2: {
        player p;
        createCharacter(p);
        break;
    }
    default:
        std::cout << "invalid choice" << std::endl;
    }
}