#ifndef music_box
#define music_box
#include <iostream>
#include <string>
using namespace std;


class Kings_box{
public:
	Kings_box();          // a default constructor
	Kings_box(string songname, int width); // a constructor that takes the song and width as arguments
	int Swidth;
	string name;
	string get_song();  // returns the name of the song that the music box plays
	int get_width();    // returns the width in centimetres of the music box
	~Kings_box();       //A default destructor
};
#endif