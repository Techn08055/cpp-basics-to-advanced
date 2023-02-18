#include <iostream>
#include <concepts>

template <typename T>
concept Multipliable  =requires (T t){
     sizeof(T) <= 4;
     requires sizeof(T) <= 4;
};
template  <typename T>
requires Multipliable <T>
T add(T a, T b){
    return a+ b;
}

int main(){
    int x{6};
    int y{7};

    auto result = add (x,y);
    std::cout << result <<std::endl;

    return 0 ;
}