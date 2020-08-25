#include <iostream>

extern int *readNumbers(int n);
extern void printNumbers(int *numbers,int length);

int main(){
	int n = 10;
	int length = 10;
	int *array = readNumbers(n);
	printNumbers(array, length);
	delete[] array;
	return 0;
}