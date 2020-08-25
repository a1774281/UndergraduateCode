# Problem Description
In this practical exam, you have to implement binary search trees and heaps together with algorithms related to sorting. You have to carry out your own implementation of binary search trees and heaps and you are not allowed to use libraries implementing them or code from external websites.
### Note that currently only the BinarySearchTree is functional, not Heapsort (To be implemented later)

## Binary Search Trees

Implement a class BinarySearchTree where the stored elements are integers. The class should include a


- Constructor: It takes an integer and creates a new BinarySearchTree which stores the integer. It has two pointers left and right to (possibly empty) binary search trees  which are initialized to "NULL"
- Method insert: It takes an integer n as an input and inserts the integer into the BinarySearchTree. The input n is inserted into the left subtree if its value is less than or equal to the value of the root and inserted into the right subtree if its value is greater than the value of the root.
- Method print_inorder: It carries out an inorder traversal of the tree and prints out the elements in the visited order. The print out for a node with integer n should be "n " (value followed by a space symbol).
- Method print_preorder: It carries out a preorder traversal of the tree and prints out the elements in the visited order. The print out for a node with integer n should be "n " (value followed by a space symbol).
- Method print_postorder: It carries out a postorder traversal of the tree and prints out the elements in the visited order. The print out for a node with integer n should be "n " (value followed by a space symbol).

## Heaps

Implement a class Heap where the elements are integers stored in an array. The class should include a

Constructor: It takes a sequence of integers and builds the heap to establish the heap property using the method buildHeap.
- Method buildHeap: It builds the heap backwards in time O(n) to establish the heap property (makes it heap-ordered) by using operations siftDown(i) as shown in the lecture.
- Method siftDown(i): Given an index i, it executes the siftDown operation starting at position i as outlined in the lecture.
- Method deleteMin: Returns the minimal element stored at the root of the heap,  deletes it, and re-establishes the heap property using siftDown as outlined in the lecture.

The main function takes as input an identifier from the set {BIN, BPO, BPR, HS} and a (possibly empty) collection of numbers (one line of characters, containing only non-negative integers) and outputs the resulting print out of the tree traversal (for binary search trees) or the sorted sequence using deleteMin for heaps.
Here, we define

- BIN: Establish the binary search tree using the constructor and insert for the given elements, and print out the elements using print_inorder.
- BPR: Establish the binary search tree using the constructor and insert for the given elements, and printout the elements using print_preorder.
- BPO: Establish the binary search tree using the constructor and insert for the given elements, and print out the elements using print_postorder.
- HS: Establish the heap property using the constructor and buildHeap for the given elements, and print out the elements in sorted order using deleteMin.
The main function should read the input, construct the BinarySearchTree or Heap and produce the output using the above defined methods.
No marks will be allocated if your main function only outputs the sample output without using these methods or outputs the correct result based on an incorrect implementation.
 
 Examples
- Sample input 1: BIN 16 13 12 14 15 11
- Sample output 1: 11 12 13 14 15 16
- Sample input 2: BPO 20 5 3 12 2 33 23 35
- Sample output 2: 2 3 12 5 23 35 33 20
- Sample input 3: BPR 16 13 12 14 15 11
- Sample output 3: 16 13 12 11 14 15
- Sample input 4: HS 20 5 3 12 2 5 6 7 23 5
- Sample output 4: 2 3 5 5 5 6 7 12 20 23
