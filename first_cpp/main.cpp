// This brings in the iostream library 
#include <iostream>
/*
    the block comment
*/

consteval int get_value(){
    return 3;
}
//Entry point in main function
int main()
{
    //one line comment
    constexpr int value = get_value();
    std::cout<<"value: "<<value<<std::endl;
    return 0;
    //progran end 
}