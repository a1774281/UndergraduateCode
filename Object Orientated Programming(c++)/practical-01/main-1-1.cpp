#include <iostream>

extern int sum_array(int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    std::cout << sum_array(array, 5) << std::endl;
    return 0;
}