#include <iostream>
#include "AreaVisitor.h"

void AreaVisitor::visit(Circle& circle) {
    double area = 3.14159265359 * circle.radius * circle.radius;
    std::cout << "Circle area: " << area << std::endl;
}

void AreaVisitor::visit(Rectangle& rectangle) {
    double area = rectangle.width * rectangle.height;
    std::cout << "Rectangle area: " << area << std::endl;
}