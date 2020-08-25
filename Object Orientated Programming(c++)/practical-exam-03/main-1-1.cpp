#include <string>
#include <iostream>
#include "Musician.h"

int main(){
	Musician Musician;
	std::cout << "My instrument is a " << Musician.get_instrument() << " and I have " << Musician.get_experience() << " experience." << std::endl;
	return 0; 
}