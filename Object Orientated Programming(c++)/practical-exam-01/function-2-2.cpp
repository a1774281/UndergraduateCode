#include <iostream>
#include <cmath>

int binary_to_number(int binary_digits[], int number_of_digits){
	int total = 0;
	int counter = number_of_digits;
	for(int i = 0; i < number_of_digits; i++){
		if(binary_digits[i] == 1){
			total += pow(2, counter);
		}
		counter--;
	}
	return (total/2);
}