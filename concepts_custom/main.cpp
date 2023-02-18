#include <iostream>
#include <concepts>
// template <typename T>
// concept MyIntegral = std::is_integral_v<T>;
template <typename T>
concept Multipliable  =requires (T a, T b){
     a*b;
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