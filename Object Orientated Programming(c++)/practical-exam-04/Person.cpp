#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

	Person::Person(string n, string o, int sl)
	{
		personID = 0;
		name = n;
		occupation = o;
		serviceLength = sl;
	}
 	
 	void Person::set_name(string n)
 	{
 		name = n;
 	}
 	
 	void Person::set_occupation(string o)
 	{
 		occupation = o;
 	}
 	
 	void Person::set_salary(int s)
 	{
 		if (s > -1){
 			salary = s;
 		}
 	}
 	
 	string Person::get_name()
 	{
 		return name;
 	}
 	
 	string Person::get_occupation()
 	{
 		return occupation;
 	}
 	
 	int Person::get_personID()
 	{
 		return personID;
 	}

	Person::~Person()
	{

	}
	