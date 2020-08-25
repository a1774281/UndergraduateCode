#include <iostream>
#include "Music_box.h"
using namespace std;
int main(){
	Music_box *Jazz = new Music_box("Jazz", 20);
	cout << "Name: " << Jazz->get_song() << "Width: " << Jazz->get_width() << endl;
	return 0;
}