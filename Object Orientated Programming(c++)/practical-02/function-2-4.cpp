#include <iostream>
//function to...
int max_integer(int integers[], int length){
	int maximum = integers[0];  
    for (int i = 0; i < length; i++) {
        if (length <= 0) {
            return -1; 
        }
		else if (maximum < integers[i]){
	    	maximum = integers[i];
		}
    }
    return maximum;
}
int min_integer(int integers[], int length){
    int minimum = integers[0];  
    for (int i = 0; i < length; i++) {
        if (length < 1) {
            return -1; 
        }
		else if (minimum > integers[i]){
	    	minimum = integers[i];
		}
    }
    return minimum;
}
int sum_min_and_max(int integers[], int length){
    return (max_integer(integers, length) + min_integer(integers, length));
}

