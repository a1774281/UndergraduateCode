#include "iostream"
#include "string.h"
using namespace std;
extern void copy_2d_strings(string first[][2], string second[][2], int n) ;

int main(void){
	string first[3][2] = {"q","w","e","r","t","y"};
	string second[3][2];
	int n = 3;
	copy_2d_strings(first, second, n);
	return 0;
}