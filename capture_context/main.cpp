// This brings in the iostream library 
#include <iostream>

int main()
{
    int c{42};
    double d{12.1};
    auto func = [&](){
        std::cout << "Inner value" << c<<std::endl;
        std::cout << "Inner value" << d<< std::endl;
    };

    for (int i = 0 ; i < 5; i++){
        std::cout << "Outer value" << c<< std::endl;
        func();
        ++c;
        ++d;
    }

    return 0;
    //progran end 
}