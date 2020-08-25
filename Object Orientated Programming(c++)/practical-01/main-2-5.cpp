#include <iostream>

extern bool descending(int array[], int n);

int main() {
	int array[5] = {5, 4, 3, 2, 1};
	std::cout << descending(array, 5) << std::endl;
    return 0;
}