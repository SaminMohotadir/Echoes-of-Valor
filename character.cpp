#include <iostream>
#include <string>
#include"player.h"
void setclas();

void createCharacter(player& p) {
    std::cout << "enter name: " << std::endl;
    std::cin.ignore();
    std::getline(std::cin, p.name);
    p.setclas();
    p.sethealth(100);
    p.setstamina(50);
    p.setdmg(15);
    p.setlvl(1);
}