#
# File: Prac7Exc4.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 10/05/19
# Description: Practical 7, exercise 4.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

storeSales = []
index = 0
endDay = 'n'
while endDay == 'n':
    sale = int(input("Enter the sale value: "))
    storeSales.append(sale)
    endDay = input("Is it the end of the day [y/n]")
print("Total Sales : $", sum(storeSales))
    
        
    
