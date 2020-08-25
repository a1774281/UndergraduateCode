#include <string>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Class definition of NiceBoxes
class NiceBoxes
{
    public:
        int minRemove(int a, int b, int c)
        {
            int answer = 0;
            while (b >= c){
            	answer++;
            	b--;
	            if (b == 0){
	            	return -1;
	            }
            }
            while (a >= b) {
            	answer++;
            	a--;
				if (a == 0){
	            	return -1;
	            }
            }
            return answer;
        }
};
