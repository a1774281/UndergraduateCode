#include <iostream>

extern int *readNumbers();
extern void printNumbers(int *numbers, int length);

int main(){
	int n;
	int *array = readNumbers();
	int length = n;
	printNumbers(array,length);
	delete[] array;
	return 0;
}