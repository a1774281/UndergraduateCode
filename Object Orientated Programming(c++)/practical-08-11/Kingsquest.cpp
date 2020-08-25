#include "MobClass.h"
#include "Player.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

int main()
{
    string name;
    string direction;

    cout << "Welcome to KingsQuest, Adventurer! Please enter your name: ";
    cin >> name;
    string location[4] = {"in a dark forest","in a cave","in the mountains","in an abandoned castle"};
    player account(name,location[0],1,0); //Name, area, level, XP amount
    cout << "\n" << account.getName() << ", you find yourself " << account.getArea() << " and are unsure how you ended up here.\n\n";
    while (1)
    {
        usleep(500);
        cout <<"You are at a crossroads. Will you turn left, right or continue forwards? ";
        cin >> direction;
        if (direction == "Left" || direction == "Right" || direction == "Forwards" || direction == "left" || direction == "right" || direction == "forwards" || direction == "l" || direction == "r" || direction == "f" || direction == "L" || direction == "R" || direction == "F")
        {
            usleep(50);
            srand(time(NULL)); //This statement uses time of PC to chance seed generation for random number, allowing for true randomness when generating numbers
            if (rand() % 2 == 1) //One in three chance of an encounter
            { 
                string fOrf; //fight or flee
                string location[4] = {"in a dark forest","in a cave","in the mountains","in an abandoned castle"};
                string monsters[5][3] = {{"Worm","Lizard","Jia Wei"},{"Rat","Snake","Trolls"},{"Lightning Dragon","Fire Dragon","Dark Griffin"},{"Reaper","Dark King","Lord of Torment"}};
                usleep(20);
                int randomMonster = (rand() % 3);
                int difficulty = (rand() % 5)+1;
                classMob monster(monsters[account.getLevel()-1][randomMonster],account.getLevel(),account.getArea(),difficulty);
                cout <<"\nWarning! You have encountered a "<< monster.getName() <<". Prepare for battle!" << "\n";
                usleep(2000);
                do //similar to while loop but checks condition at end
                {
                    cout << "\n######################################\n\nHP:"<< account.getHealth() << "                                         "<< monster.getName()<<"HP:"<<monster.getHealth()<<" Difficulty:"<<monster.getDifficulty() << "\n";
                    cout << "\nWill you fight or run? ";
                    cin >> fOrf;
                    if (fOrf == "Run" || fOrf == "run" || fOrf == "R" || fOrf == "r")
                    {
                        if ((rand() % 2) == 1){
                            cout << "\nRetreat successful." << "\n";
                            monster.setHealth(0);
                        }
                        else{
                            cout << "\nRetreat failed. The monster attacks you. You lose 5 health.\n";
                            account.setHealth(account.getHealth()-5);
                            fOrf ="Fight";
                        }
                    }
                    if (fOrf == "Fight" || fOrf == "fight" || fOrf == "F" || fOrf == "f")
                    {
                        int attack =rand()%(account.getDamage());
                        srand(time(NULL));
                        int mobAttack = rand()%(monster.getDamage());
                        monster.setHealth(monster.getHealth()-attack);
                        account.setHealth(account.getHealth()-mobAttack);
                        cout << "\nYou deal " << attack << " damage on the monster.\n";
                        usleep(500);
                        cout << "The monster counter attacks for " << mobAttack << " damage.\n";
                        usleep(500);
                    }
                } while (monster.getHealth() >0 && account.getHealth() > 0); 
                cout << "\n######################################\n\nCongratulations! You have slain the monster. \n\nYour HP:"<< account.getHealth() << "\n";
                if (account.getHealth() <= 0)
                {
                    cout << "\nYou have failed your quest.\n"; 
                    //
                    // total mobs killed + user level
                    //
                    exit(0);
                }
                cout << "\n#########\n\nCalculating EXP\n\n#########\n";
                usleep(500);
                account.setEXP(account.getEXP());
                cout << "\nEXP: " <<account.getEXP() << "/" << account.getEXPReq() << "\n\n";
                if (account.getEXP() >= account.getEXPReq())
                {
                    account.setLevel(account.getLevel()+1);
                    account.setEXPReq();
                    account.setMaxHealth();
                    account.setHealth(account.getMaxHealth());
                    cout << "Level up! You are now level: " << account.getLevel() << "!\n";
                }
            }
        }
        else{
            cout << "\nPlease enter 'Left', 'Right' or 'Forwards'\n\n";
            cin.clear();
            cin.ignore();
        }
    }
    return 0;
}
