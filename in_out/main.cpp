#include <iostream>
# include <string>

int main(){
    //Printing data
    std::cout << "Hello C++20" << std::endl;

    int age {21};
    std::cout << "Age : " << age << std::endl;

    std::cerr <<"Error mesage"<< std::endl;;
    std::clog << "Log message : Something happened" << std::endl;

    std::string name;

    std::cout << "Eneter the name" << std::endl;

    std::getline(std::cin,name);
    
    std::cout << "hello " << name <<std::endl;
    return 0;
}