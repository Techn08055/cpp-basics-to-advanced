// This brings in the iostream library 
#include <iostream>
int max (int a, int b);


//Entry point in main function
int main()
{
    int a{3};
    int b{4};
    
    int value = max(a, b);
    std::cout<<"value: "<<value<<std::endl;
    return 0;
    //progran end 
}

int max (int a, int b){
    if (a > b)
        return a;
    else 
        return b;
}