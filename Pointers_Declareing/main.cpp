#include <iostream>

int main(){
    int *p_number {};

    double *p_fractional_number{};

    // int *p_number {nullptr};

    std::cout << sizeof(p_number) << std::endl;
    std::cout << sizeof(p_fractional_number)<< std::endl;

    int int_var{43};
    int *p_int{&int_var};
    std::cout << int_var << std::endl;
    std::cout << p_int << std::endl;
    return 0;
}