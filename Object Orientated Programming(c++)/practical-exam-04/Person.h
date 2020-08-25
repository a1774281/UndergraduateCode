#ifndef PERSON_H	
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	Person(string n, string o, int sl);   // creates a person of name n, occupation o, and service length sl
 	void set_name(string n);
 	void set_occupation(string o);
 	void set_salary(int s);
 	string get_name();
 	string get_occupation();
 	virtual int get_salary() = 0;
 	int get_personID();

 	string name;                       // the name of a person
 	string occupation;                 // the occupation of a person
 	int salary;                        // the salary of a person; takes only non-negative values
 	int serviceLength;                   // the service length of a person
 	int personID;                        // the unique ID of a person
	~Person();
	
};
#endif