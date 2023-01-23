#include <iostream>

int main()
{
    auto var1 {12};
    auto var5 {'e'};

    std::cout << sizeof(var1) << std::endl;
    std::cout << sizeof(var5) << std::endl;
    return 0;
}