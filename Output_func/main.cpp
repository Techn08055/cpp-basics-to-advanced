// This brings in the iostream library 
#include <iostream>
void max (int input1 , int input2, int* output){
    if (input1 > input2)
        *output = input1;
    else 
        *output = input2;

}//Entry point in main function
int main()
{
    //one line comment
    int a = 3;
    int b = 4 ; 
    int out; 
    max(a, b, &out);
    std::cout<<"value: "<<out<<std::endl;
    return 0;
    //progran end 
}