#include <iostream>

using namespace std;
class EggCartons
{
public:
    int minCartons(int n){
        if(n % 2 == 1 || n < 6)
            return -1;
        else if(n == 6 || n == 8)
            return 1;
        else{
            int sixes = minCartons(n-6);
            int eights = minCartons(n-8);
            if(sixes!=-1 && eights!=-1)
                return min(sixes, eights)+1;
            else if(sixes == -1 && eights != -1)
                return eights + 1;
            else if(sixes != -1 && eights == -1)
                return sixes + 1;
            else
                return -1;
        }
            
    }
};