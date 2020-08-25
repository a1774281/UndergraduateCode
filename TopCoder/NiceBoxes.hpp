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
            	// cout << "answer: "<< answer << endl;
            	b--;
            	// cout << "b: "<< b << endl;
	            if (b == 0){
	            	return -1;
	            }
            }
            while (a >= b) {
            	answer++;
            	// cout << "answer: "<< answer << endl;
            	a--;
            	// cout << "a: "<< b << endl;
				if (a == 0){
	            	return -1;
	            }
            }
            return answer;
        }
};