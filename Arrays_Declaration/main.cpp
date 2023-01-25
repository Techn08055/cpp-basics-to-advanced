#include <iostream>

int main(){
    int scores [] = {1, 3, 4, 5, 6, 7, 8, 9, 1, 5};
    scores[0] = 20;
    scores[1] = 21;
    std::cout << std::endl;
    std::cout << scores[0] << std::endl; 
    for(int i :scores){
        std::cout << scores[i] << std::endl;
    }
    return 0;
}