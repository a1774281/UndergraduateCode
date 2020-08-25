using namespace std;

extern void print_sevens(int*,int);

int main(void){
	int length = 10;
	int array[10] = {21, 2, 14, 4, 5, 49, 7, 8, 9, 0};
	int* ptr = &array[0];
	print_sevens(ptr,length);
	return 0;
}