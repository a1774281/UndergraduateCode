#include <iostream>

bool is_a_palindrome(int integers[], int length){
	if (length < 0){
		return -1;
	}
	else if (length % 2 == 0){
		int counter = 0;
		for (int i = 0; i < length/2; i++){
			if (integers[i] == integers[length-i-1]){
				counter++;
			}
		}
		if (counter == (length/2)){
			return true;
		}
		else{
			return false;
		}
	}
	else if (length % 2 != 0){
		int counter = 0;
		for (int i = 0; i < (length-1)/2; i++){
			if (integers[i] == integers[length-i-1]){
				counter++;
			}
		}
		if (counter == ((length-1)/2)){
			return true;
		}
		else{
			return false;
		}
	}
}

int sum_elements(int integers[], int length){
	if (length < 0){
		return -1;
	}
	int total = 0;
	for(int i = 0; i < length; i++){
		total += integers[i];
	}
	return total;
}


int sum_if_a_palindrome(int integers[], int length){
	if (length < 0){
		return -1;
	}
	if (is_a_palindrome(integers, length) == 1){
		return sum_elements(integers, length);
	}
	else{
		return -2;
	}
}