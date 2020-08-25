#include <iostream>
using namespace std;

int *readNumbers(int n){
	int *array = new int[n];
	for (int i = 0; i < n; i++){
		cin >> array[i];
	}
	return array;
}

void printSubArrays(int *numbers,int length){
	int array[length];
	int counter2, counter3;
	for (int i = 0; i < length; i++){
		counter3 = 1;
		for (int j = 0; j < counter2; j++){
			cout << "{";
			
			for (int m = 0; m < counter3; m++){
					cout << numbers[m];
				if (m < counter3-1){
					cout << ",";
				}
			}
			cout << "}";
			if(j < counter2-1){
				cout << ",";
			}
			counter3++;
		}
		counter2--;
		cout << endl;
	}
}