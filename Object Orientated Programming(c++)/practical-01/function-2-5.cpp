#include <iostream>
// Returns number of elements in an array that are equal to desired number
bool descending(int array[], int n) {
    int max = array[0];

    for (int i = 0; i < n; i++) {
        if (n < 1) {
            return false; 
        }
        if (max >= array[i]){
            max = array[i];
        }
        else{
            return false;
        }
    }
    return true;   
}
