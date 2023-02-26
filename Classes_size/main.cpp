#include <iostream>

const double PI {3.14};

class Dog{
    public :
        Dog()= default;
    
    private :
        size_t leg_count;
        size_t arm_count;
};

int main(){
    Dog d1;
    std::cout<<sizeof(Dog);
    return 0;

}