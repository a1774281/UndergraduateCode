#
# File: Prac2Exc14.py
# Author: Ethan Copeland
# Email Id: copey006@mymail.unisa.edu.au
# Version: 1.0 16/03/19
# Description: Practical 2, exercise 14.
# This is my own work as defined by the University's
# Academic Misconduct policy.
#

numOfShares = 2000
commission = 0.03
costShares = 40
commissionCost = (numOfShares * costShares) * commission
purchaseCost = numOfShares * costShares
print("Joe bought the shares for: $",purchaseCost)
print("The commission cost Joe: $",commissionCost)

sellCost = 42.75
totalSellPrice = numOfShares * sellCost
sellCommissionCost = (numOfShares * sellCost) * commission
totalValue = (totalSellPrice - sellCommissionCost) - (purchaseCost - commissionCost)
print("Joe sold the shares for: $", totalSellPrice)
print("The commission to sell cost Joe: $", sellCommissionCost)
print("Joe has", totalValue, "after selling his shares")
