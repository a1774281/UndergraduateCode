#include <iostream>

extern int *readNumbers(int n);
extern void months(int* monthNumbers,int length) ;

int main(){
	int n = 10;
	int length = 10;
	int *array = readNumbers(n);
	months(array, length);
	delete[] array;
	return 0;
}