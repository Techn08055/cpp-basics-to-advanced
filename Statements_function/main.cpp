#include <iostream>

int addNumbers(int first_param, int sec_param)
{
    int result = first_param + sec_param;
    return result;
}
int prodNumbers(int first_param, int sec_param)
{
    int result = first_param * sec_param;
    return result;
}
int main(){
    int first_number {3}; //statement
    int second_number {7};
    std::cout << "First Number:  " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;
    
    int sum = first_number + second_number;
    std::cout << "Sum : " <<sum <<std::endl;

    sum = addNumbers(25, 7);
    std::cout << "Sum : " <<sum <<std::endl;

    int prod = prodNumbers(25, 7);
    std::cout << "Sum : " <<prod <<std::endl;
    return 0;
}