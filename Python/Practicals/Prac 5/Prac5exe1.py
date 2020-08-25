#
# File: Prac5Exc1.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 12/04/19
# Description: Practical 5, exercise 1.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

n = int(input("Please enter an integer: "))
count = 1
if n < 1:
    n = int(input("Invalid: Please enter an integer: "))
while n != 1:
    print("The number is:", n)
    if n % 2 == 0:
        n = n/2
        
    else:
        n = n * 3 + 1
    count += 1
print("The number is:", n)
print("The sequence took,", count, "steps")
