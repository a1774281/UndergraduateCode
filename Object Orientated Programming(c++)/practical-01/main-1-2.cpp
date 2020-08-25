#include <iostream>

extern double average(int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << average(array, 5) << std::endl;
    return 0;
}