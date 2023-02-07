#include <iostream>

int main(){
    size_t size{10};

    int* p_sal {new(std::nothrow) int[size]{}};

    for (int i =0; i < size; i++ )
    {
        std::cout<<"django";
    }


    delete[] p_sal;
    p_sal = nullptr;

}