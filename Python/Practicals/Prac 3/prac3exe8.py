#
# File: Prac3Exc8.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 29/03/19
# Description: Practical 3, exercise 8.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

import random
k = 0
while k != 10:
    i = 0
    odd = 0
    even = 0
    while i != 100:
        number = random.randint(0,1000)
        if number % 2 == 0:
            even = even + 1
        else:
            odd = odd + 1
        i = i + 1
    k = k + 1
    print("Out of 100 random number,", even, "were even and,", odd, "were odd")
print("Done!")
