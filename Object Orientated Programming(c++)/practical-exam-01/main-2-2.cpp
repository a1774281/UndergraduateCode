#include <iostream>
extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
	int array[6] = {1, 1, 1, 1, 1, 1};
	int n = 6;
	std::cout << binary_to_number(array, n) << std::endl;
}