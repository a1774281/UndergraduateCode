#
# File: Prac3Exc3b.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 22/03/19
# Description: Practical 3, exercise 3b.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

str1 = 'Wednesday Thursday Friday'
new_string = ''
index = 0
while index < len(str1):
 if str1[index].isupper():
     new_string = str1[index] + new_string
     
 index = index + 1
new_string = new_string + '!?!'
print(new_string)
