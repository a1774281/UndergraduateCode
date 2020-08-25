#
# File: Prac5Exc3.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 12/04/19
# Description: Practical 5, exercise 3.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

colour1 = input("Enter your first primary colour:")
colour2 = input("Enter your second primary colour")

if colour1 != 'red' or colour1 != 'blue' or colour1 != 'yellow':
    print('ERROR!')

if colour1 == 'red' and colour2 == 'blue' or colour1 == 'blue' and colour2 == 'red':
    print('Red and Blue make Purple')
elif colour1 == 'red' and colour2 == 'yellow' or colour1 == 'yellow' and colour2 == 'red':
    print('Red and yellow make Orange')
elif colour1 == 'blue' and colour2 == 'yellow' or colour1 =='yellow' and colour2 == 'blue':
    print('Blue and Yellow make Green')
elif colour1 == colour2:
    print(colour1, 'and', colour2, 'make more', colour1)
