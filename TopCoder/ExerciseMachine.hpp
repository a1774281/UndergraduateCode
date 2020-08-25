#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

class ExerciseMachine {
private:
	//Variables and Methods Here!
public:
	//Or Variables and Methods Here!
	int getPercentages(string time) {
		int answer = 0, hours = 0, minutes = 0, seconds = 0;
		replace(time.begin(), time.end(), ':', ' ');
		istringstream iss(time);
		iss >> hours >> minutes >> seconds;
		
		seconds += (minutes*60) + (hours * 3600);
		for(int i = 1; i < 100; i++){
			if (((i * seconds) % 100) == 0){
				answer++;
			}
		}
		return answer;
	}
};