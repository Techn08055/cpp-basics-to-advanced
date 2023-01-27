#include <iostream>

int main(){
    int max {};
    int num1 {25};
    int num2 {35};
    max = (num1 > num2) ? num1 : num2;
    std::cout << "the max value is " << max << std::endl;
    return 0;
}