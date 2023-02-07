#include <iostream>

int main(){
    int age = 30;
    const  int& ref_ag {age};
    age =32;

    std::cout << age << ref_ag;
}