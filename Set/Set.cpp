#include "Set.h"
#include <iostream>
#include <algorithm>
using namespace std;

Set::Set(){
    array[0] = { };
    arraySize = 0;
}

void Set::addElement(int n){
        removeElement(n);
        array[arraySize] = n;
        arraySize++;
}

void Set::removeElement(int n){
    for (int i = 0; i < arraySize; i++){
        if (n == array[i]){
            for (int j = i; j < arraySize; j++){
                array[j] = array[j+1];
            }
            array[arraySize-1] = 0;
            arraySize--;
       }
    }
}

double Set::returnAverage(){
    if (arraySize == 0){
        return -1;
    }
    double avg = 0;
    for (int i = 0; i < arraySize; i++){
        avg += array[i];
    }
    avg = avg/arraySize;
    return avg;
}

int Set::returnMaximum(){
    if (arraySize == 0){
        return -1;
    }
    int max = array[0];
    for (int i = 1; i < arraySize; i++){
        if (array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int Set::returnMinimum(){
    if (arraySize == 0){
        return -1;
    }
    int min = array[0];
    for (int i = 1; i < arraySize; i++){
        if (array[i] < min){
            min = array[i];
        }
    }
    return min;
}