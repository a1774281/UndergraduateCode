#include <iostream>
// Returns number of elements in an array that are equal to desired number
int minimum(int array[], int n) {
    int minimum = array[0];  
    for (int i = 0; i < n; i++) {
        if (n < 1) {
            return 0; 
        }
	else if (minimum > array[i]){
	    minimum = array[i];
	}
    }
    return minimum;
}