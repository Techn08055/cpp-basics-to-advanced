// This brings in the iostream library 
#include <iostream>

int sum (int a, int b){
    int result = a + b;
    return result;
}
int main()
{
    int a = 5;
    int b = 6;
    int value = sum(a, b);
    std::cout<<"value: "<<value<<std::endl;
    return 0;
    //progran end 
}