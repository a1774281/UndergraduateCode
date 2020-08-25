#include <iostream>
#include <string>

using namespace std;

class StreetParking
{
public:
	int freeParks(string street){
		int freeParks = 0;

		int streetlength = street.length();

		for (int i = 0; i < streetlength; i++) {	
			if ((i != 0) && street[i] == 'S' && (street[i - 1] != 'B' && street[i - 1] != 'D' && street[i - 1] != 'S')) {
				street[i-1] = 'T';
			}
			if ((i != 0)  && (street[i - 1] != 'B' && street[i - 1] != 'S' && street[i - 1] != 'D' && street[i] == 'B')) {
				street[i-1] = 'T';
			}
			if ((i != (streetlength -1)) && (street[i + 1] != 'B' && street[i + 1] != 'D' && street[i] == 'S' && street[i + 1] != 'S')) {
				street[i+1]= 'T';
			}
			if ((i != 0 && i != 1) && (street[i - 2] != 'B' && street[i - 2] != 'S' && street[i - 2] != 'D' && street[i] == 'B')) {
				street[i-2] = 'T';
			}
		}
		for (int i = 0; i < streetlength; i++) {
			if (street[i] != 'B' && street[i] != 'D' && street[i] != 'T' && street[i] != 'S') {
				freeParks++;
			}
		}
		return freeParks;
	}
};