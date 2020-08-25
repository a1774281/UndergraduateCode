#
# File: Prac5Exc2.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 12/04/19
# Description: Practical 5, exercise 2.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#
import random
rolls = 0
pairs = 0
while rolls != 10:
    
    die1 = random.randint(1,6)
    die2 = random.randint(1,6)
    if die1 == die2:
        print("You rolled a pair of", die1,"'s")
        pairs += 1
    else:
        print("You rolled a:", die1, "and a:", die2)
    rolls += 1
    
if pairs > 1:
    print("You rolled", pairs, "pairs")
else:
    print("You didn't roll any pairs")
