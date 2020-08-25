#include <iostream>
using namespace std;
 
class Inchworm
{
  public:
    int result;
    int leaf2;

    int lunchtime(int branch, int rest, int leaf){
        result=1;
        leaf2 = leaf;
        while (leaf <= branch){
            if (leaf % rest == 0){
                result++;
            }
            leaf +=leaf2;
        }
        return result;
    }
};
