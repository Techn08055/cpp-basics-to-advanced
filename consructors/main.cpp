#include <iostream>

const double PI {3.14};

class Cylinder{
    public :
        double radius {1.0};
        double height {1.0};
    
    public :
        Cylinder(){
            radius = 2.0;
            height = 2.0;
        };
        
        Cylinder(double in_radius, double in_height){
            radius = in_radius;
            height = in_height;
        };

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

    Cylinder c2 (4.0, 5.0 );
    std:: cout << "vlume : " << c2.Volume() << std::endl;


}