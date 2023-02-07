#include <iostream>

int main(){

    int*lots_pf_ints1 {new (std::nothrow) int[100000000000000]};
    for (size_t i{}; i <100000000000000; i++ ){

        try{
            int* lots_pf_ints1 {new int[100000000000000]};
        }catch(std::exception& ex){
        std::cout << "something is wrong: " << ex.what() <<std::endl;
        }
    }
}