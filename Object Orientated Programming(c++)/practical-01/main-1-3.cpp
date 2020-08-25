#include <iostream>

extern int count(int[], int, int);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << count(array, 5, 4) << std::endl;
    return 0;
}