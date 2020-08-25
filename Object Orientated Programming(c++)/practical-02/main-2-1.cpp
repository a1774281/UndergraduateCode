#include <iostream>
#include <string>
//Main to...
extern void print_as_binary(std::string decimal_number);

int main() {
	std::string decstring = "12345";
	print_as_binary(decstring);
    return 0;
}