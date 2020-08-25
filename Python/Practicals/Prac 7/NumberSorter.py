#
# File: Prac7Exc5.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 10/05/19
# Description: Practical 7, exercise 5.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

y = 0
i = 0
x = 0
numberList = []
index = 0
highestNum = 0
lowestNum = 9999999
while x < 20:
    number = int(input("Enter number:"))
    numberList.append(number)
    x += 1
while index < 20:
    if numberList[index] > highestNum:
        highestNum = numberList[index]
        index += 1
    else:
        index += 1
print("The highest number is: ", highestNum)
    
while i < 20:
    if numberList[i] < lowestNum:
        lowestNum = numberList[i]
        i += 1
    else:
        i += 1
print("The lowest number is: ", lowestNum)

while y > 20:
    y += 1
print("Total amount of numbers is: ", y)

