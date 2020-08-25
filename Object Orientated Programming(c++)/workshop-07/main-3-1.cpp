#include <iostream>

using namespace std;

extern int *readNumbers(int n);
extern bool equalsArray(int *A, int *B, int length);

int main() {
    int n;
    cout << "Enter set numbers: ";
    cin >> n;
    int *ptr1 = readNumbers(n);
    int *ptr2 = readNumbers(n);

    cout << "True/fase: " << equalsArray(ptr1, ptr2, n) << endl;

    delete[] ptr1;
    delete[] ptr2;

    return 0;
}