#include <iostream>

int main(){

    double val{12.0};
    double& ref_val {val};
    double* point_val {&val};

    std::cout << val << "\n" << ref_val << "\n" << *point_val << std::endl ;
    
    double o_val {87};

    ref_val = o_val;

    std::cout << val << "\n" << ref_val << "\n" << *point_val << std::endl;


}