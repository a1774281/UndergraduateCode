#include <iostream>
#include <string>
//function to...
void print_as_binary(std::string decimal_number){
	int decimal = stoi(decimal_number);
	int binaryNum[32]; 
	int i = 0; 
    while (decimal > 0) { 
        binaryNum[i] = decimal % 2; 
        decimal = decimal / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) {
        std::cout << binaryNum[j]; 
    }
    std::cout << std::endl;
}

