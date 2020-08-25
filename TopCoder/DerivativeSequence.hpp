#include <vector>
using namespace std;
class DerivativeSequence
{
public:
    vector<int> derSeq(vector<int> a, int n)
    {
        for (int i = 0; i < n; i++) {
            vector<int> derseq;
            for (int j = 0; j < a.size()-1; j++) {
                derseq.push_back(a[j+1] - a[j]);
            }
            a = derseq;
            derseq.clear();
        }
        return a;
    }
};