#include <iostream>
#include "cylinder.h"

int main(){

    Cylinder cylinder1(10,10);
    std::cout << "volume : " << cylinder1.Volume() << std::endl;
    
    return 0;
}