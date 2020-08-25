#include <iostream>

extern int sumtwo(int[], int[], int);

int main() {
    int array[5] = {4,5,6,7,8};
    int secondarray[5] = {4,5,6,7,8};
    std::cout << sumtwo(array, secondarray, 5) << std::endl;
    return 0;
}