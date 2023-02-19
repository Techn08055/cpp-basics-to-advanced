#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"
class Cylinder {
    public : 
        //Constctors
        Cylinder() = default;
        Cylinder(double in_radius, double in_height);

        //Functions (methods)
        double Volume ();
        
        //Setter and getter methods
        double get_base_radius();
        double get_height();

        void set_radius(double rad);

        void set_height(double heig);
    private : 
        //Member variables
        double base_radius{1};
        double height{1};
};

#endif