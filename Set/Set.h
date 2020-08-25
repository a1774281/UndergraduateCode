#ifndef SET_H
#define SET_H

#include <iostream>
using namespace std;

class Set{
private:
    int n;
    int array[50];
    int arraySize;
public:
    Set();
    void addElement(int n);
    void removeElement(int n);
    double returnAverage();
    int returnMaximum();
    int returnMinimum();

};
#endif
