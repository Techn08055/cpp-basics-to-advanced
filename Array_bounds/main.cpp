#include <iostream>

int main(){
   int numbers[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   std::cout << numbers[11] << std::endl;
   numbers[11] = 1000;
    std::cout << numbers[11] << std::endl;
    return 0;
}