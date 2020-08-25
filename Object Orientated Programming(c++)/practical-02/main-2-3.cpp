#include <iostream>
//Main to...
extern int sum_if_a_palindrome(int integers[], int length);

int main() {
	int integers[7] = {1, 2, 3, 4, 3, 2, 1};
	int length = 7;
	std::cout << sum_if_a_palindrome(integers, length) << std::endl;
    return 0;
}