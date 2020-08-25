#
# File: Prac5Exc4.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 17/04/19
# Description: Practical 5, exercise 4.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#
play = input("Would you like to sing a song [y|n]? ")
count = 0
bottles = 100
maxVerses = 100
minVerse = 1
while play != 'y' and play != 'n':
    play = input("Please select y or n: ")
    
while play == "y":
    verses = int(input("How many verses would you like to sing? "))
    
    while verses > maxVerses or verses < minVerse:
        if verses > maxVerses:
            print("Too high, Try below 100")
            verses = int(input("How many verses would you like to sing? "))
        elif verses < minVerse:
            print("Too low, Try above 0")
            verses = int(input("How many verses would you like to sing? "))
            
    bottles = 100
    
    while count != verses:
        print(bottles, "bottles of beer on the wall")
        print(bottles, "bottles of beer")
        print("If one of those bottles should happen to fall")
        bottles = bottles - 1
        print(bottles, "bottles of beer on the wall")
        print("")
        count = count + 1 
    play = input("Would you like to sing a song [y|n]? ")
    
    while play != 'y' and play != 'n':
        play = input("Please select y or n: ")
    count = count - count
    
print("finished")
