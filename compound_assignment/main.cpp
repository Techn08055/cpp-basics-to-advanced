#include <iostream>

int main(){

int value {45};

std::cout << "The value is :" << value << std::endl;

value += 5;
std::cout << "The value after adding is: " << value << std::endl;

value -= 5;
std::cout << "The value after difference is: " << value << std::endl;

value *= 2;
std::cout << "The value after product is: " << value << std::endl;

value %= 11;
std::cout << "The value after reminder is: " << value << std::endl;

return 0;

}