#include <iostream>
#include <concepts>

template <typename T>
concept TinyType = requires (T t){
    sizeof(T) <= 4;
    requires sizeof(T)<=4;
};

template <typename T> requires std::integral<T> &&  TinyType<T> T add (T a, T b){
    return a + b;
}
int main(){
    int a_0{10};
    int a_1{11};

    auto result_a = add(a_0, a_1);
    std::cout << "result_a:" << result_a<< std::endl;

}

