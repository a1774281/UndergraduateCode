#
# File: prac2exe8.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 15/03/19
# Description: Practical 2 - exe 8
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

price = int(input("Please input the price in dollars: "))
discount = float(input("Please enter percent discount in decimal form: "))
discountValue = price * discount
actualPrice = price - discountValue
print("Price with discount is:", actualPrice)
