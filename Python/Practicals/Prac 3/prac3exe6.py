#
# File: Prac3Exe6.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 22/03/19
# Description: Practical 3, exercise 6.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

day = int(input("Please enter the day: "))
month = int(input("Please enter the months in numeric form: "))
year = int(input("Please enter the year in two numbers: "))

if day * month == year:
    print("That day is magic")
else:
    print("That day is not magic")

