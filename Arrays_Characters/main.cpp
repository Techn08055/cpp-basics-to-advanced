#include <iostream>

int main(){
    char message [] = {'h', 'e', 'l', 'l', 'o', '\0'};
    std::cout << message << std::endl;
    char message1[] = {"Hello"};
    std::cout << message1 << std::endl;
    return 0;
}