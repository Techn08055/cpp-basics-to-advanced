#include <iostream>
# include <cstring>

int main(){
    const char* message2 {"message"};
    const char* message1 {"messg"};
    std::cout << std::strlen(message2);
    std::cout << std::strncmp(message1, message2, 4);

    
}