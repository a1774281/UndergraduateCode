#include <iostream>

extern int maximum(int array[], int n);

int main() {
	int array[5] = {1, 2, 3, 4, 5};
    std::cout << maximum(array, 5) << std::endl;
    return 0;
}