#include <iostream>

class Dog{
    std::string m_name;
};

struct Cat{
    std::string m_name;
};

int main(){
    Dog d1;
    Cat c1;
    // d1.m_name = "maakn";
    c1.m_name = "maakan";
    std::cout << c1.m_name<<std::endl;
}