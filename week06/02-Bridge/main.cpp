
#include "Shape.hpp"
#include "Circle.hpp"
#include "Drawer.hpp"
#include "DrawerGL.hpp"
#include "DrawerSFML.hpp"


int main(void) {
   Shape *circle1 = new CircleShape(1,2,3,new DrawerGL());
   Shape *circle2 = new CircleShape(5,7,11,new DrawerSFML());
   circle1->resizeByPercentage(2.5);
   circle2->resizeByPercentage(2.5);
   circle1->draw();
   circle2->draw();
   delete circle1;
   delete circle2;
   return 0;
}