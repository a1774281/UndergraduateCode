#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Truckloads {
private:
	//Variables and Methods Here!
public:
	//Or Variables and Methods Here!
	int numTrucks(int numCrates, int loadSize) {
		// CODE HERE
        if (numCrates <= loadSize) {
            return 1;
        }
        else if(numCrates % 2 == 0){
        	return numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates / 2, loadSize);
        } 
        else {
        	return numTrucks(numCrates / 2, loadSize) + numTrucks(numCrates / 2 + 1, loadSize);
        }
    }
};