// This brings in the iostream library 
#include <iostream>
template <typename T> T maximum (T a, T b);

int main()
{   
    int a{10};
    int b{23};
    //one line comment
   
    std::cout<<"value: "<<maximum(a, b)<<std::endl;
    return 0;
    //progran end 
}

template <typename T> T maximum(T a, T b){
    return (a > b)?a:b;
}