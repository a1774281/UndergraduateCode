#ifndef SHELF
#define SHELF

#include <iostream>
#include <string>
#include "Music_box.h"

using namespace std;

class Shelf{
public:
	Shelf();  
	Shelf(int width);  
	int swidth;
	int currentwid;
	int count;
	int get_width(); 
	int get_number_of_music_boxes(); 
	Music_box *get_contents();
	Music_box Box [3];
	bool add_music_box(Music_box a_music_box);
	~Shelf();
};
#endif