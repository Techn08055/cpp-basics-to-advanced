#include <iostream>
#include <cstring>

int main(){

    char dest[50] = "Hello";
    char src[50] = "World";
    std::cout << std::strcat(dest, src) << std::endl;

    std::cout << std::strncat(dest, src, 3) << std::endl;

    char*dest2 = new char[std::strlen(src)+1];
    std::cout << std::strcpy(dest2, src);

    char* dest3 = new char[std::strlen(src)+1];
    std::cout << std::strncpy(dest3, src, 3);

}