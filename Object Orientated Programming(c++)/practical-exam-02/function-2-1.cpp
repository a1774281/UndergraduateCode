#include <iostream>
using namespace std;

int *readNumbers(int n){
	int *array = new int[n];
	for (int i = 0; i < n; i++){
		cin >> array[i];
	}
	return array;
}

void months(int* monthNumbers,int length){
	int array[10];
	for (int i = 0; i < length; i++){
		switch(monthNumbers[i]){
			case 1:
			cout << i << " 1 " << "January" << endl;
			break;
			case 2:
			cout << i << " 2 " << "Febuary" << endl;
			break;
			case 3:
			cout << i << " 3 " << "March" << endl;
			break;
			case 4:
			cout << i << " 4 " << "April" << endl;
			break;
			case 5:
			cout << i << " 5 " << "May" << endl;
			break;
			case 6:
			cout << i << " 6 " << "June" << endl;
			break;
			case 7:
			cout << i << " 7 " << "July" << endl;
			break;
			case 8:
			cout << i << " 8 " << "August" << endl;
			break;
			case 9:
			cout << i << " 9 " << "September" << endl;
			break;
			case 10:
			cout << i << " 10 " << "October" << endl;
			break;
			case 11:
			cout << i << " 11 " << "November" << endl;
			break;
			case 12:
			cout << i << " 12 " << "December" << endl;
			break;
		}
	}
}