#include <iostream>
#include "Shelf.h"

using namespace std;

Shelf::Shelf(){
	swidth = 0;
	currentwid = 0;
} 
Shelf::Shelf(int width){
	swidth = width;
	currentwid = width;
}  

int Shelf::get_width(){
	return currentwid;
} 

int Shelf::get_number_of_music_boxes() {
	return count;
}

Music_box* Shelf::get_contents(){
	for(int i = 0; i < count; i++){
		Box[i];
	}
}


bool Shelf::add_music_box(Music_box a_music_box){
	if (a_music_box.Swidth < swidth){
		swidth = swidth -currentwid;
		Box[count] = a_music_box;
		count++;
		return true;
	}
	else {
		return false;
	}
}
 
Shelf::~Shelf(){

}
