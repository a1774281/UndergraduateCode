# Problem Description
The function myF is defined as

![equation](https://latex.codecogs.com/gif.latex?myF%28n%29%3D%5Cbegin%7Bcases%7D%201%20%26%20%5Cmbox%7Bif%20%7D%200%5Cleq%20n%20%5Cleq%2010%5C%5C%20myF%28n/2%29&plus;myF%28n-2%29&plus;myF%28n-3%29%20%26%20%5Cmbox%7Bif%20%7D%20n%20%5Cmbox%7B%20is%20even%20and%20%7D%20n%3E10%20%5C%5C%20myF%28%28n-1%29/2%29&plus;myF%28n-3%29&plus;myF%28n-4%29%20%26%20%5Cmbox%7Bif%20%7D%20n%20%5Cmbox%7B%20is%20odd%20and%20%7D%20n%3E10%20%5C%5C%20%5Cend%7Bcases%7D)

You are asked to create a class myF that supports the following methods:
- solve: computes the result of myF for the given non-negative integer n using recursion following the function definition.
- solve_mem: computes the result of myF for a given non-negative integer n using memoisation and recursion following the function definition. Use an appropriate data structure  for memoisation.

You may assume that that the output of myF(n) can be stored as an integer.
The main function takes as input a (possibly empty) collection of numbers (one line of characters, containing only non-negative integers) and outputs myF(n) for each input n.
If n<=40 then your method solve has to be used to compute the output, otherwise solve_mem has to be used.
The main function should read the input, construct a function myF, and use the above defined methods to produce the output.
No marks will be allocated if your main function only outputs the sample output without using these methods or outputs the correct result based on an incorrect implementation.
 
- Sample input 1: 11 12 13 14 15 16
- Sample output 1: 3 3 3 7 7 11
- Sample input 2: 2 3 5 12 21
- Sample output 2: 1 1 1 3 31
- Sample input 3: 45 47 51 55 34
- Sample output 3: 11737 19017 49945 131017 1033
