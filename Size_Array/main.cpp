#include <iostream>

int main(){
    int scores [] = {1, 3, 4, 5, 6, 7, 8, 9, 1, 5};
    std::cout << "scores size " << std::size(scores) << std::endl;
    std::cout << "size is " << sizeof(scores)/sizeof(scores[0]) << std::endl;;
    for(int i {0}; i < (std::size(scores)); i++ ){
        std::cout << scores[i] << std::endl;
    }
    return 0;
}