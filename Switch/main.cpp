#include <iostream>

int main(){
    const int pen {10};
    const int marker {20};
    int tool {3};
    switch (tool){
        case pen:{
            std::cout << "pen" << std::endl;
        }
        break;

        case marker:{
            std::cout << "marker" << std::endl;
        }
        break;

        default:{
            std::cout << "default" << std::endl; 
        }
    }
    std::cout << "out" << std::endl;
    return 0; 
}