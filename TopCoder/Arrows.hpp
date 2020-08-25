#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

class Arrows {
private:
	//Variables and Methods Here!
public:
	//Or Variables and Methods Here!
	int longestArrow(string s) {
		int answer = -1, currentLength = -1;
		int sLength = s.length();
		for (int i = 0; i < sLength; i++){
			if (s[i] == '>'){				//if ---->/=====>
				currentLength = 1;
				for (int j = i-1; j >= 0; j--){
					if (s[j] == '<' || s[j] == '>' || s[j] != s[i-1]){
						break;
					}
					currentLength++;
				}
			}
			else if (s[i] == '<'){			//else if <-----/<======
				currentLength = 1;
				for (int j = i+1; j < sLength; j++){
					if (s[j] == '<' || s[j] == '>' || s[j] != s[i+1]){
						break;
					}
					currentLength++;
				}
			}
			answer = max(currentLength, answer);
		}
		return answer;
	}
};