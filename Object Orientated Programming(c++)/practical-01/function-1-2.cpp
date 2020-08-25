#include <iostream>
// Sums together all numbers in given array and returns average of total
double average(int array[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        if (n < 1) {
            return 0.0; 
        }
	else {
	    total += array[i];
	}
    }
    total = (double(total)/n);
    return total;
}