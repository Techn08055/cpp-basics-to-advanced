// This brings in the iostream library 
#include <iostream>
int main()
{
    int a {10};
    int b {20};
    //one line comment
    auto func = [&a](){
        std::cout<< a << std::endl;
    };
    for (int i = 0; i<5; i++){
        std::cout << "val" << a << std::endl;
        func();
        ++a;
    }
    return 0;
    //progran end 
}