#include <iostream>

int main(){
    int int_value {45};

    int& ref_val {int_value};
    std::cout << int_value << std::endl;
    std::cout << ref_val  << std::endl ;
    std::cout << &int_value  << std::endl;
    std::cout << &ref_val << std::endl;
    
    int_value = 67;
    std::cout << int_value << std::endl;
    std::cout << ref_val  << std::endl ;
    std::cout << &int_value  << std::endl;
    std::cout << &ref_val << std::endl;


}