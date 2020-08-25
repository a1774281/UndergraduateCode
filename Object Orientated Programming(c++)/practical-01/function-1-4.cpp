#include <iostream>
// Returns number of elements in an array that are equal to desired number
int sumtwo(int array[], int secondarray[], int n) {
    int total = 0;  
    for (int i = 0; i < n; i++) {
        if (n < 1) {
            return 0; 
        }
	else {
	    total += array[i] + secondarray[i];
	}
    }
    return total;
}