#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;


class AzimuthMonitoring
{
public:
	int getAzimuth(vector<string> instructions){	
        int result = 0;
        for (int i = 0; i < instructions.size(); i++)
        {
            if (instructions[i] == "HALT" )
            {
		        while (result < 0)
		        {
		            result += 360;
		        }
		        while (result >= 360)
		        {
		            result -= 360;
	        	}
	        	return result;
            } 
            else if (instructions[i] == "LEFT")
            {
                result -= 90;
            }
            else if (instructions[i] == "RIGHT")
            {
                result += 90;
            }
            else if (instructions[i] == "TURN AROUND")
            {
                result += 180;
            }
            else
            {
            istringstream iss(instructions[i]);
		        string command;
		        int degree;
		        iss >> command >> degree ;
		        string commandL;
		        commandL = command[0];
		        if (commandL == "L"){
		        	result -= degree;
		        }
		        else {
		        	result += degree;
		        }
            }
        }
        while (result < 0)
        {
            result += 360;
        }
        while (result >= 360)
        {
            result -= 360;
        }
        return result;
    }

	
};
