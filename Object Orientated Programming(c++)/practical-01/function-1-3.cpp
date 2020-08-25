#include <iostream>
// Returns number of elements in an array that are equal to desired number
int count(int array[], int n, int number) {
    int total = 0;  
    for (int i = 0; i < n; i++) {
        if (n < 1) {
            return 0; 
        }
	else if (array[i] == number) {
	    total++;
	}
    }
    return total;
}