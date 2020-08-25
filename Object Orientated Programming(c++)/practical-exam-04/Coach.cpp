#include <iostream>
#include <string>
#include "Coach.h"
#include "Person.h"
using namespace std;

	int Coach::nextID = 0;

	Coach::Coach(string n, int sl) : Person(n, "Coach", sl)
	{
		personID+=nextID;
		nextID++;
		serviceLength = sl;
	}
 	int Coach::get_salary()
 	{
 		if (serviceLength < 15 && serviceLength > -1){
 			return salary;
 		}
 		else{
 			return salary*3;
 		}
 	}


	Coach::~Coach()
	{

	}
	