#include <iostream>
void transform(int a){
    int b = 0;
    while(a != 0){
        b = a % 2;
        a = a / 2;
        std::cout << b;
    }
    std::cout << std::endl;
}


