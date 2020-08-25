#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

class DownloadingFiles
{   
    public:
    double actualTime(vector<string> tasks)
    {
        double bandWidth = 0, result = 0;
        for (int i=0; i<tasks.size(); i++)
        {
            double num1, num2;
            istringstream iss(tasks[i]);
            iss >> num1 >> num2;     
            result += num1 * num2;
            bandWidth += num1;
        }
        return result /bandWidth ;
    }
};
