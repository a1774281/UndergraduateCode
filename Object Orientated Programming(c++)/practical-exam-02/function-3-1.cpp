#include <iostream>
using namespace std;

int *readNumbers(int n){
	int *array = new int[n];
	for (int i = 0; i < n; i++){
		cin >> array[i];
	}
	return array;
}

bool twinArray(int* numbers, int length){
	int array[length];
	int counter = 0;
	for (int i = 0; i < length; i++){
		if (i % 2 == 0){
			if (numbers[i] != numbers[i+1]){
				return false;
			}
		}
	}
	return true;
}