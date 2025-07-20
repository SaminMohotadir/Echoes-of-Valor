#ifndef class_H
#define class_H
#include<string>
#include<vector>
class player {
private:
	int health;
	int stamina;
	int dmg;
public:
    std::string cheakpoint;
	std::string name;
	int lvl;
	std::string clas;
	std::string ability1;
	player(std::string n = "",int h=100, int s = 50 , int dmg = 15 , int lvl=1 , std::string c = "" , std::string ab1 = "")
		: health(h),stamina(s),dmg(dmg),name(n),lvl(lvl),clas(c),ability1(ab1) {}
	int showhealth() const { return health; }
	int showstamina() const { return stamina; }
	int showdmg() const { return dmg; }
	int showlvl() const { return lvl; }
	void sethealth(int h) { health = h; }
	void setstamina(int s) { stamina = s; }
	void setdmg(int d) { dmg = d; }
	void setlvl(int lvl) { lvl = lvl; }
	void setname(std::string n) { name = n; }
    void setclas() {
        int choice = 0;
        while (true) {
            std::cout << "enter class\n1. wizard\n2. warrior" << std::endl;
            std::cin >> choice;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(1000, '\n');
                std::cout << "Invalid input! Try again." << std::endl;
                continue;
            }

            if (choice == 1) {
                clas = "wizard";
                break;
            }
            else if (choice == 2) {
                clas = "warrior";
                break;
            }
            else {
                std::cout << "Please enter 1 or 2." << std::endl;
            }
        }
    }
    void setcheakpoint(std::string cp) { cheakpoint = cp;}
};
#endif