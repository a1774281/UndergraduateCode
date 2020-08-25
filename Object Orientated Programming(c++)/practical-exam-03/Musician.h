#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <string>

class Musician{
		int experience = 10;
		std::string instrument = "cello";
public:
	Musician();      
	Musician(std::string instrument, int experience);      
	std::string get_instrument(); 
	int get_experience();
	~Musician();   
};
#endif