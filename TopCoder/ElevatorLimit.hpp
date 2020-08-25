#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class ElevatorLimit{
public:
    vector<int> getRange(vector<int> enter, vector<int> exit, int physicalLimit){
        vector<int> empty;
        int minimum = 1000;
        int maximum = -1000;
        int total = 0;
        for(int i=0; i < enter.size(); ++i){
            total -= exit[i];
            minimum = min(total, minimum);
            total += enter[i];
            maximum = max(total, maximum);
        }
        int totalRange = maximum - minimum;
        minimum = abs(minimum);
        maximum = min(physicalLimit, physicalLimit-maximum);
        if(totalRange > physicalLimit || minimum > maximum){
            return empty;
        }
        vector<int> result{minimum, maximum};
        return result;
    }
};