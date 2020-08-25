#
# Problem Solving and Programming - Debugging exercise
#

def maximum( no1, no2, no3 ):
    maxValue = no1

    if ( no2 > maxValue ):
        maxValue = no2

    if ( no3 > maxValue ):
        maxValue = no3

    return maxValue


num1 = 4
num2 = 1
num3 = 7

result = maximum(num1, num2, num2)

print('Maximum is: ', result)
