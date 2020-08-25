#include <iostream>
#include <sstream>
#include "Set.h"
using namespace std;

int main() {
    Set setTest;
    string input;
    getline(cin, input);
    stringstream str_strm;
    str_strm << input;
    string temp_str;
    int temp_int;
    while(!str_strm.eof()) {
        str_strm >> temp_str;
        if(stringstream(temp_str) >> temp_int) {
            setTest.addElement(temp_int);
        }
        temp_str = "";
    }
    setTest.removeElement(setTest.returnMaximum());
    cout << setTest.returnAverage() << " " << setTest.returnMaximum() << " " << setTest.returnMinimum() << endl;
}