#include <iostream>
#include <windows.h>
#include <conio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int mod;
	system("color 0a");
	std::cout << "\n\t\t\t ## Tchat by TairoCruiz ##\n\t\t Make sure you have install python >3.8 & Chatterbot module in it. \n\tLoading.";
	for(int f = 4; f <= 32; f++){
		mod = f % 4;
		switch(mod){
			case 0:
				std::cout << "\\";
				break;
			case 1:
				std::cout << "|";
				break;
			case 2:
				std::cout << "/";
				break;
			case 3:
				std::cout << "--";
				break;
			default:
				std::cout << "Tairo says:: An unespected error has been occoured.! \n";
				break;
		}
		sleep(1);
		std::cout << "\b \b"; 	
		if(f == 32){
			std::cout << "\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b               \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
		}
	}
	sleep(1);
	std::cout << "\n";
	system("python Tchat.py");
	sleep(1);
	std::cout << "\n\n\t\t\tYOUR CONVERSATION HAS BEEN CLOSED!\n\nClose the app and start again!\n";
	getchar();
	return 0;
}