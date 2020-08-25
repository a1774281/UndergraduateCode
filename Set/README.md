# Problem Description
A set of integers is a (possibly empty) collection of integer numbers where no integer appears more than once.
For example {1, 2, 3} is a set but {1, 2, 2, 3} is not (it's a multiset) and we would remove the duplicated "2" to obtain the set {1, 2, 3}. We assume that all numbers are positive.
 
You are asked to create a Set class that stores a set of integers and supports the following methods:
- Constructor Set(): creates an empty set.
- addElement(int n): adds an integer n to the set if it is not already contained in the set.
- removeElement(int n): removes the integer n if contained in the set.
- returnAverage: returns a double giving the average value of the elements in the set.
- returnMaximum: returns an integer giving the maximum value among all elements in the set.
- returnMinimum: returns an integer giving the minimum value among all elements in the set.
The methods returnAverage(), returnMaximum(), returnMinimum() should return -1 in the case that the set is empty.

You are also asked to create a main function.
The main function takes as input a collection of numbers (one line of characters, containing only integers) and outputs the average, maximum, and minimum  of the given set of numbers after the removal of the largest number. The main function has to use the above defined methods to produce the output.
The main function should read the input, construct an empty and add all numbers of the input to the set. Afterwards, it should remove the largest number from the set.
For the remaining set,  the output (average maximum minimum) using returnAverage(), returnMaximum(), returnMinimum() has to be produced.
Your main function has to use the above defined methods to produce the output in the order average maximum minimum (see sample inputs and outputs below).
No marks will be allocated if your main function only outputs the sample output without using these methods.
 
- Sample input 1: 7 9 10 5
- Sample output 1: 7 9 5
- Sample input 2: 1 2 2 3 3
- Sample output 2: 1.5 2 1
- Sample input 3: 1
- Sample output 3: -1 -1 -1
