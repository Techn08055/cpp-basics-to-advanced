#include <iostream>

int main(){
    char* p_message {"hello world"};
    std::cout << p_message << std::endl;
    std::cout << *p_message << std::endl;
    return 0;
}