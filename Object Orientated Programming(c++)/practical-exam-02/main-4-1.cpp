#include <iostream>

extern int *readNumbers(int n);
extern void printSubArrays(int *numbers,int length) ;

int main(){
	int n = 3;
	int length = 3;
	int *array = readNumbers(n);
	printSubArrays(array, length);
	delete[] array;
	return 0;
}