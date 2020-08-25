/*Functional, but too CPU intensive*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class AlternateColors{
public:
    string getColor(long r, long g, long b, long k){
		int i = 0;
		while(i != k){
			if(r > 0) {
				r--;
			}
			else if (g > 0) {
				g--;
			}
			else {
				b--;
			}
			i++;
		}
		if (i % 3 == 0) {
			return "BLUE";
		}
		else if (i % 3 == 1){
			return "RED";
		}
		else if (i % 3 == 2) {
			return "GREEN";
		}
		return 0;
	}
};