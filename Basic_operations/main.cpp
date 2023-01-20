#include <iostream>

int main(){

//Add
int number1{2};
int number2{7};
int result = number1 + number2;
std::cout << result << std::endl;

//subtraction
result = number2 - number1;
std::cout << result << std::endl;

//negative
result = number1 - number2;
std::cout << result << std::endl;

//multiplication 
result = number1 * number2;
std::cout << result << std::endl;

//division 
result = number2 / number1;
std::cout << result << std::endl;

//modulus
result = number2 % number1;
std::cout << result << std::endl;

result = 31 % 10;
std::cout << result << std::endl;
return 0;
}