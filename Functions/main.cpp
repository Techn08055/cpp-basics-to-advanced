// This brings in the iostream library 
#include <iostream>

int max (int a, int b){
    a = 3;
    b = 0; 
    if (a > b)
        return a;
    else 
        return b;
}
//Entry point in main function
int main()
{   
    int a =5 , b = 3;
    //one line comment
    int value = max(a, b);
    std::cout<<"value: "<<value<<std::endl;

    std::cout<< a << b;
    return 0;
    //progran end 
}