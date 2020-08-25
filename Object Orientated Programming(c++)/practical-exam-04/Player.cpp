#include <iostream>
#include <string>
#include "Player.h"
#include "Person.h"
using namespace std;

	int Player::nextID = 1000;
	Player::Player(string n, int sl, int *list, int m) : Person(n, "Player", sl)
	{
		numtimes = m;
		personID+=nextID;
		nextID++;
	}
	int Player::get_salary()
 	{
 		if (serviceLength < 20 && serviceLength > -1){
 			return salary;
 		}
 		else{
 			return salary*3;
 		}
 	}
 	int Player::searchGame(int x, int *list)
 	{

 		return -1;
 	}
	Player::~Player()
	{

	}
