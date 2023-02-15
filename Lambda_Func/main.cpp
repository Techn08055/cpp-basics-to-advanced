// This brings in the iostream library 
#include <iostream>

int main()
{
   auto result = [](double a, double b) -> int{
        return a+b;
    };

    std::cout<<"value: "<<result(4.3,7)<<std::endl;
    return 0;
    //progran end 
}