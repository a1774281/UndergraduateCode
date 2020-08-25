#include <iostream>
// Returns number of elements in an array that are equal to desired number
int count_even(int number) {
    int total = 0;  
    for (int i = 1; i < number+1; i++) {
        if (number < 1) {
            return 0; 
        }
	else if (i % 2 == 0) {
	    total++;
	}
    }
    return total;
}