#include <iostream>
using namespace std;
class ThrowTheBall
{
    public:
    int timesThrown(int N, int M, int L)
    {
        int result = 0;
        int passcount = 1;
        int P[50] = {0};
        for (int i=0; i<20; i++){  // PENIS
            while (P[i] == M-1){
             result++;
             return result;
            }
            if (P[passcount] % 2 == 0){
                passcount = passcount - L;
                P[passcount]++;
                if (passcount < 1){
                    passcount = passcount + N;
                }
            result++;
            }
            if (P[passcount] % 2 != 0){
                passcount = passcount + L;
                P[passcount]++;
                    if (passcount > N){
                        passcount= passcount - N;
                    }
                result++;
            }
            if (P[passcount] == M-1){
                return result;
            }
        }
    }
};
