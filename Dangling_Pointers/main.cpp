#include <iostream>

int main(){
    int* p_num{}; //random initialisation

    int* p_num1 {new int{67}};

    delete p_num1;
    p_num1 = nullptr;


}