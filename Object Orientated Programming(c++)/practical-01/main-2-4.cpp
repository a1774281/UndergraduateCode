#include <iostream>

extern bool ascending(int array[], int n);

int main() {
	int array[5] = {3, 2, 3, 4, 5};
	std::cout << ascending(array, 5) << std::endl;
    return 0;
}