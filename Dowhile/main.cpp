#include <iostream>

int main(){
    const unsigned int COUNT {10};
    unsigned int i {0};
    do {
        std::cout << "[" << i <<"]" << "i love c++" << std::endl;
        ++i;
    }
    while (i < COUNT);
    

}