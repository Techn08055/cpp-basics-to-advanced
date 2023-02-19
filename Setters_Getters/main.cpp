#include <iostream>

const double PI {3.14};

class Cylinder{
    private :
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

        double get_base_radius(){
            return radius;
        }

        double get_height(){
            return height;
        }

        void set_radius(double rad){
            radius = rad;
        }

        void set_height(double heig){
            height = heig;
        }


        double Volume (){
            return PI*radius*radius*height;
        }
};

int main(){
    Cylinder c1;
    std:: cout << "vlume : " << c1.Volume() << std::endl;

    c1.set_radius(3) ;
    c1.set_height(4) ;
    std:: cout << "vlume : " << c1.Volume() << "for values : " << c1.get_base_radius() << c1.get_height() << std::endl;

    Cylinder c2 (4.0, 5.0 );
    std:: cout << "vlume : " << c2.Volume() << std::endl;


}