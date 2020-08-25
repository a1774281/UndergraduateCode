#
# File: Prac3Exc3d.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 22/03/19
# Description: Practical 3, exercise 3d.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

str1 = '348924731'
result = 0
index = 0
while index < len(str1):
 if index % 2 == 0:
     result = result + int(str1[index])

 index = index + 1
print(result)
