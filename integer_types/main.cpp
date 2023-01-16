#include <iostream>

int main(){
    int elephant_count;

    int lion_count{};

    int dog_count {10};

    int cat_count {15};

    int dom_animals {dog_count + cat_count};

    int jabu = 2.3;

    std::cout << elephant_count << lion_count << std::endl;

    std::cout << jabu <<std::endl;

    std::cout << sizeof(jabu);
    
    return 0;
}