#include <iostream>

extern int *readNumbers(int n);
extern int* mergeArrays(int* A, int* B, int length);
extern void printNumbers(int *numbers,int length);

int main(){
	int n = 10;
	int length = 10;
	int *array = readNumbers(n);
	int *array2 = readNumbers(n);
	int *arraymerge = mergeArrays(array, array2, length);
	printNumbers(arraymerge, length*2);
	delete[] array;
	delete[] array2;
	delete[] arraymerge;
	return 0;
}