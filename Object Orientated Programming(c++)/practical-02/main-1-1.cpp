#include <iostream>
//Main to...
extern int diagonal(int array[4][4]);

int main() {
    int array[4][4] = {1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4, 1, 2, 3, 4};
    std::cout << diagonal(array) << std::endl;
    return 0;
}