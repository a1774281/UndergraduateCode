#
# File: Prac2Exc12.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 16/03/19
# Description: Practical 2, exercise 12.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

temperature = int(input("Please enter the temperature: "))

if temperature >= 40:
    print("Wayyy too hot inside!")
elif temperature >= 30 and temperature < 40:
    print("Hot - Beach time")
elif temperature >= 20 and temperature < 30:
    print("Lovely day - how about a pinic")
elif temperature >= 10 and temperature < 20:
    print("On the cold side - bring a jacket")
elif temperature < 10:
    print("Way too cold - stoke up the fire")


        
