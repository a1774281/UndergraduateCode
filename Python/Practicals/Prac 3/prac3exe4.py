#
# File: Prac3Exc4.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 22/03/19
# Description: Practical 3, exercise 4.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#
import random

die1 = random.randint(1,6)
die2 = random.randint(1,6)

if die1 == die2:
    print("You rolled a pair of",die1,"'s")
else:
    print("You rolled a", die1, "and", die2)
