#include <iostream>
#include <concepts>
// template <typename T>
// concept MyIntegral = std::is_integral_v<T>;

std::integral auto add(std::integral auto a, std::integral auto b){
    return a+ b;
}

int main(){
    int x{6};
    int y{7};

    auto result = add (x,y);
    std::cout << result <<std::endl;

    return 0 ;
}