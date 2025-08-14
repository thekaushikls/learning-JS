#include <iostream>
#include "Point3d.h"

int main()
{    
    geometry::Point3d p1 = geometry::Point3d(1, 2, 3);
    geometry::Point3d p2 = geometry::Point3d::Origin();

    std::cout << p1.toString() << std::endl;
    std::cout << p2.toString() << std::endl;
    p2 = p1.Product(5);
    std::cout << p2.toString() << std::endl;
}
