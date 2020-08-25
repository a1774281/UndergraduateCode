#include <iostream>
using namespace std;
extern int *readNumbers(int n);
extern bool twinArray(int* numbers, int length) ;

int main(){
	int n = 10;
	int length = 10;
	int *array = readNumbers(n);
	twinArray(array, length);
	cout << endl;
	delete[] array;
	return 0;
}