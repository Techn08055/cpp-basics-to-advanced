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
        void print_info(){
           std::cout << name << breed << std::endl;
        }
        Dog& set_dog_name(std::string_view name){
            this->name = name;
            return * this;
        }
        Dog& set_breed(std::string_view breed){
            this->breed = breed;
            return *this;
        }
        Dog& set_age(int age){
            *(this->p_age) = age;
            return *this;
        }
};

Dog :: Dog(std::string_view name_param, std::string_view breed_param, int p_age_param)
{
    name = name_param;
    breed = breed_param;
    p_age = new int;
    *p_age = p_age_param;
    std::cout << "constructor called at" << this << std::endl;
}

Dog::~Dog(){
    delete p_age;
    std::cout << "destructor called at" << this << std::endl;
}

int main(){
    Dog  my_dog ("Fluffy", "Shepherd", 1);
    my_dog.set_dog_name("pooha").set_breed("ahda").set_age(6);
    my_dog.print_info();
    return 0;
}