#include <iostream>

const double PI {3.14};

class Cylinder{
    public :
        double radius {1.0};
        double height {1.0};
    
    public :
        double Volume (){
            return PI*radius*radius*height;
        }
};

int main(){
    Cylinder c1;
    std:: cout << "vlume : " << c1.Volume() << std::endl;

    c1.height = 3;
    c1.radius = 3;
    std:: cout << "vlume : " << c1.Volume() << std::endl;


}