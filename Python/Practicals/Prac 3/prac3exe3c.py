#
# File: Prac3Exc3c.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 22/03/19
# Description: Practical 3, exercise 3c.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

str1 = '348924731'
new_string = ''
index = 0
while index < len(str1):
 if index % 2 == 0:
     new_string = new_string + str(str1[index])

 index = index + 1
print(new_string)
