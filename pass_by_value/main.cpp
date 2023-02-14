// This brings in the iostream library 
#include <iostream>

void say_age (int age){
    ++age;
    std::cout << "you are "<< age <<std::endl;
}
//Entry point in main function
int main()
{
    int age =24;
    std::cout << "you are "<< age <<std::endl;
    say_age(age);
    std::cout << "you are "<< age <<std::endl;

    return 0;
    //progran end 
}