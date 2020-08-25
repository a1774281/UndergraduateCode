#ifndef MEERKAT_H
#define MEERKAT_H

#include <string>

class meerkat
{
	static int count;
	int id;
	std::string name;
	int age;

public:
	meerkat() ;                   
	void setName(std::string meerName);  
	std::string getName();
	void setAge(int meerAge);   
	int getAge();
	~meerkat();
};

#endif