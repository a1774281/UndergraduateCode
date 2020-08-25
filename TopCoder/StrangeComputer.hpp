#include <iostream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

class StrangeComputer {
private:
	//Variables and Methods Here!
public:
	//Or Variables and Methods Here!
	int setMemory(string mem) {
        int answer = 0;
        char bit = '0';
        int memlength = mem.length();

        for (int i = 0; i < memlength; i++) {
            if (mem[i] != bit) {
                bit = mem[i];
                answer++;
            }
        }
        return answer;
	}
};