#include <iostream>
//Main to...
extern void print_scaled_matrix(int array[3][3], int scale);

int main() {
    int array[3][3] = {
    	{1, -2, 3}, 
    	{4, -5, 6}, 
    	{7, -8, 9}, 
    };
    print_scaled_matrix(array, 3);
    return 0;
}