#
# File: Prac3Exc9.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 29/03/19
# Description: Practical 3, exercise 9.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

name1 = 'Homer'
name2 = 'Simpson'
name3 = 'Donuts'
print(name1 + ' ' + name2)
print(name1 + '\'s ' + name3)
print('m'*6 + ' ' + name3)
print(name1[2])
print(name3[2:6])
print(name1[0:4:1])
print(name2[-2])
print(len(name2))
fullName = name1 + ' ' + name2
if fullName == 'Homer Simpson':
 print('Doh!')
else:
 print('Bart - is that you?')
