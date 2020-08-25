#include <iostream>
// Returns number of elements in an array that are equal to desired number
int maximum(int array[], int n) {
    int maximum = array[0];  
    for (int i = 0; i < n; i++) {
        if (n < 1) {
            return 0; 
        }
	else if (maximum < array[i]){
	    maximum = array[i];
	}
    }
    return maximum;
}