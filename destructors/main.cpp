#include <iostream>
#include <string_view>
const double PI {3.14};

class Dog{
    private :
       std::string name;
       std::string breed;
       int * p_age {nullptr}; 
    
    public :
        Dog() = default;
        Dog(std::string_view name_param, std::string_view breed_param, int p_age_param);
        ~Dog();
};

Dog :: Dog(std::string_view name_param, std::string_view breed_param, int p_age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = p_age_param;
}

Dog::~Dog(){
    delete p_age;
    std::cout << name <<std::endl;
}

void some_func(){
    Dog my ("Fluffy","boo",3); 
}

int main(){

    Dog  my_dog ("Fluffy", "Shepherd", 1);
    some_func();
    return 0;
}