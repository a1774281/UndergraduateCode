#ifndef COACH_H	
#define COACH_H
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

class Coach : virtual public Person
{
public:
	Coach(string n, int sl);
	int serviceLength;  
	int get_salary();
	~Coach();
private:
	static int nextID ;
};
#endif