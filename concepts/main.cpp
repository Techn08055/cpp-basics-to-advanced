#include <iostream>
template <typename T> requires std::integral<T> T add (T a, T b){
    return a + b;
}
int main(){
    int a_0{10};
    int a_1{111};

    auto result_a = add(a_0, a_1);
    std::cout << "result_a:" << result_a<< std::endl;

}

