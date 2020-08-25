#
# File: Prac3Exe7.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 22/03/19
# Description: Practical 3, exercise 7.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

import random

play = "y"  # set so the loop must run at least once 
while play == "y":  # loop set so user can as to play again
    number = random.randint(1,100)
    print(number)  # Shows the number to guess (for test purposes)
    userGuess = int(input("Enter a Guess: "))
    while userGuess != number:  # compares the guess to the number 
        if userGuess < number:
            print("Too low, please try again")
        else:
            print("Too High - please try again")

        userGuess = int(input("Please Guess!"))  # Allows for second attempts
    play = input("Would you like to play again y/n?")  # when number is guess this is set so they can end or replay the game

print('done!')
