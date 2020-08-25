## REQUIREMENTS 

Your submission should contain exactly one file: main.cpp. You do not need to submit a design.

Your program takes one line as input. The input line contains three integers separated by spaces. Let the three integers be I1, I2, and B. I1 and I2 are both nonnegative integers up to 100 digits long (there are no leading 0s, except when the value itself is 0). B is I1 and I2’s base (B is from 2 to 10).

Your program should output the sum of I1 and I2, using the school method, then the product of I1 and I2, using the Karatsuba algorithm.

The results should still use base B. Please separate the results using one space.

Sample input 1: 101 5 10
Sample output 1: 106 505
Sample input 2: 10 111 2
Sample output 2: 1001 1110
Sample input 3: 111 10 2
Sample output 2: 1001 1110

## Information for struggling students - 

 - Read the slides, take particular notice of the "Pseudocode" for Karatsuba Multiplication
  - Split a and b to obtain a1, a0, b1, and b0.`
    Do this by both splitting string a and string b in half
  - Compute the three products
    p0=a0·b0, p1=(a1+a0)·(b1+b0), p2=a1·b1
  - Add the aligned products to obtain
    p=p2·B2k+(p1(p2+p0))·Bk+p0
  
  For n ≤ 3: use school method
  For n ≥ 4: use these three steps


## Build Functions (Integrating all bases here is helpful)  

School Addition example using only strings
https://www.geeksforgeeks.org/sum-two-large-numbers/

School Subtraction example using only strings
https://www.geeksforgeeks.org/difference-of-two-large-numbers/

School Multiplication example using only strings
https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/

Take INSPIRATION after understanding process (Second example is of greater help)
https://www.geeksforgeeks.org/karatsuba-algorithm-for-fast-multiplication-using-divide-and-conquer-algorithm/
