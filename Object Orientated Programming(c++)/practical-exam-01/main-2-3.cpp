#include <iostream>
extern int sum_if_a_palindrome(int integers[], int length);

int main(){
	int integers[6] = {1, 0, 1, 1, 0, 1};
	int length = 6;
	std::cout << sum_if_a_palindrome(integers, length) << std::endl;
	return 0;
}