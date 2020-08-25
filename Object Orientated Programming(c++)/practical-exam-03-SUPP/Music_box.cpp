#include <iostream>
#include "Music_box.h"
#include <string>
using namespace std;

Music_box::Music_box(){
	name = "null";
	Swidth = 0;
}         
Music_box::Music_box(string songname, int width){
	name = songname;
	Swidth = width;
}
string Music_box::get_song(){
	return name;
} 
int Music_box::get_width(){
	return Swidth;
}   
Music_box::~Music_box(){

}     