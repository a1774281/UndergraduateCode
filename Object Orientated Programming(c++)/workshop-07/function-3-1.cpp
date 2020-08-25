#include <iostream>

using namespace std;

int *readNumbers(int n) {
    cout << "Enter numbers: " << endl;
    int *array = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    return array;
}

bool equalsArray(int *A, int *B, int length) {
    if (length > 0) {
        for (int i = 0; i < length; i++) {
            if (A[i] != B[i]) {
                return false;
            }
        }
    }
    return true;
}