#
# File: Prac2Exc13.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 16/03/19
# Description: Practical 2, exercise 13.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

import random

number = random.randint(1,10)
#print(number)
guess = int(input("Enter a guess between 1 and 10: "))

if guess == number:
    print("Well done - you got it")
else:
    print("Better luck next time")
