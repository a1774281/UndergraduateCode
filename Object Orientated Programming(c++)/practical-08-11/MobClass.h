#ifndef MOBCLASS_H
#define MOBCLASS_H
#include <string>
#include "Unit.h"
using namespace std;

class classMob : public Unit
{
public:
    classMob(string,int,string,int); // name,lvl,area,difficulty
    void setDifficulty(int);
    int getDifficulty();
    void setMaxHealth(){
        mobMaxHealth = (15 *(getDifficulty() + getLevel()));
    }
    void setDamage(){
        mobDamage = (3 *( getLevel())+((getDifficulty()*getLevel())/2));
    }
private:
    string mobName;
    string mobArea;
    int mobLevel;
    int mobDamage;
    double mobHealth;
    double mobMaxHealth;
    int mobDifficulty;
};
#endif