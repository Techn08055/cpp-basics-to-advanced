// This brings in the iostream library 
#include <iostream>

int max(int a, int b){
    return (a>b)?a:b;
}
double max(double a, double b){
    return (a>b)?a:b;
}
std::string_view max( std::string_view a, std::string_view b){
    return (a>b)?a:b;
}
int main()
{
    int a = 10;
    int b = 20;
    int value = max( a,  b);
    std::cout<<"value: "<<value<<std::endl;
    return 0;
    //progran end 
}