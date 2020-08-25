#include <iostream>

extern void cpyia(int *,int *,int length);

int main(void){
	int oldarr[6] = {1, 2, 3, 4, 5, 6};
	int newarr[6];
	int length = 6;
	cpyia(oldarr, newarr, length);
	return 0;
}