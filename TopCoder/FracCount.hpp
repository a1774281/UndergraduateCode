#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

class FracCount {
public:
    int position(int numerator, int denominator)
    {
        int position = 0, currNum = 1, currDen = 2, tempNumer = 0, tempNumb = 0, tempDen = 0;
        while (true) {
        	tempDen = currDen;
        	tempNumer = currNum;
            while(tempDen != 0){
            	tempNumb = tempDen;
            	tempDen = tempNumer % tempDen;
            	tempNumer = tempNumb;
            }
            if (tempNumer == 1) {
                position++;
                if (currNum == numerator && currDen == denominator) {
                    return position;
                }
            }
            currNum++;
            if (currNum == currDen) {
                currNum = 1;
                currDen++;
            }
        }
    }
};