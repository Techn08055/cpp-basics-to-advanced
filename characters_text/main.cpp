#include <iostream>

int main()
{
    char characters {'a'};

    std::cout << characters <<std::endl;

    char value = 65;
    std::cout << value << std::endl;
    std::cout << static_cast<int>(value) << std::endl;
   
    return 0;
}