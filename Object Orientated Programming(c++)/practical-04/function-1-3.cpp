#include <iostream>

void cpyia(int old_array[],int new_array[],int length){
	int* oldarr = &old_array[0];
	int* newarr = &new_array[0];
	for (int i = 0; i < length; i++){
		*(newarr+i) = *(oldarr+i);
	}
	
}