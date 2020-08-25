#ifndef Orchestra_H
#define Orchestra_H
#include <string>
#include "Musician.h"

class Orchestra{
	int size = 0;
	Musician m[4];
public:
	Orchestra();      
	Orchestra(int size);      
	int get_current_number_of_members();
	bool has_instrument(std::string instrument);
	Musician *get_members();
	bool add_musician(Musician new_musician);
	~Orchestra();   
};
#endif