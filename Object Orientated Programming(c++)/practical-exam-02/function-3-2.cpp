#include <iostream>
using namespace std;

int *readNumbers(int n){
	int *array = new int[n];
	for (int i = 0; i < n; i++){
		cin >> array[i];
	}
	return array;
}

int* mergeArrays(int* A, int* B, int length){
	int array[length];
	int counter = 0;
	int *arraymerge = new int[length*2];
	for (int i = 0; i < length; i++){
		arraymerge[i] = A[i];
	}
	for (int i = length; i < length*2; i++){
		arraymerge[i] = B[counter];
		counter++;
	}
	return arraymerge;
}

void printNumbers(int *numbers,int length){
	int array[length];
	for (int i = 0; i < length; i++){
		cout << i << " " << numbers[i] << endl;
	}
}