#include <vector>
#include <algorithm>
using namespace std;

class FibonacciDiv2
{
public:
    int find(int N)
    {
        vector<int> Fib {0, 1}; 
        int count = 0;
        int minimumSteps = 1000000;
        for (int i = 2; i < 32; i++) {
            Fib.push_back(Fib[i - 1] + Fib[i - 2]);
        }
        for (int j = 0; j < Fib.size(); j++) {
            count = abs(Fib[j] - N);
            if (count < minimumSteps) {
                minimumSteps = count;
            }
        }
        return minimumSteps;
    }
};