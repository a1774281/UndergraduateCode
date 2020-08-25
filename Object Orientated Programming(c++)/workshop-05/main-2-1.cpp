#include <iostream>
using namespace std;

extern int *readNumbers();
extern void hexDigits(int *numbers, int length);

int main() {
    int *ptr = readNumbers();

    hexDigits(ptr, 10);
    delete[] ptr;

    return 0;
}