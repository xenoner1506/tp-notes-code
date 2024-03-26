#include "Rectangle.h"

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

void Rectangle::accept(ShapeVisitor& visitor) {
    visitor.visit(*this);
}
