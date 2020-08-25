
#ifndef PERSON_H
#define PERSON_H

#include<iostream>
using namespace std;
#include<string>
class person
{
public:
    person();
	person(string myName,int Salary); 
	void setName(string myName);     
	string getName();
	void setSalary(int mySalary);    
	int getSalary();
	~person();
	string Name;
	int salary;
};
#endif