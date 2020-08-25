#include <iostream>
//Main to...
extern int sum_min_and_max(int integers[], int length);

int main() {
	int integers[7] = {1, 2, 3, 4, 6, -2, -1};
	int length = 7;
	std::cout << sum_min_and_max(integers, length) << std::endl;
    return 0;
}