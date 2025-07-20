#include<iostream>
void start();
int main() {
	int choice;
	while (true) {
		std::cout << "-----main menu-----" << std::endl;
		std::cout << "Echoes of Valor\n[1]start\n[2]exit\n";
		std::cin >> choice;
		switch (choice) {
		case 1: start(); break;
		case 2: std::cout << "Exiting" << std::endl; return 0; break;
		default: std::cout << "invalade choice" << std::endl;
		}
	}
}