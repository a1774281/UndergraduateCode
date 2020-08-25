#ifndef PLAYER_H	
#define PLAYER_H
#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Player : virtual public Person
{
public:
	Player(string n, int sl, int *list, int m);
	int searchGame(int x, int *list);  
	virtual int get_salary(); 
	~Player();
	int numtimes;
	int serviceLength;
	
private:
	static int nextID ;
};
#endif