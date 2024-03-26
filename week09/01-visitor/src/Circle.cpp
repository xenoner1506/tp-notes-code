#include "Circle.h"

Circle::Circle(double r) : radius(r) {}

void Circle::accept(ShapeVisitor& visitor) {
    visitor.visit(*this);
}
