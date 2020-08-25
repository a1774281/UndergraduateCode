#include <iostream>
//Main to...
extern void count_numbers(int array[4][4]);

int main() {
    int array[4][4] = {
    	{1, 2, 3, 4}, 
    	{5, 6, 7, 8}, 
    	{9, 0, 2, 2}, 
    	{5, 5, 9, 9}, 
    };
    count_numbers(array);
    return 0;
}