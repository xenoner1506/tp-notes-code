#pragma once
#include "Shape.h"

class Circle : public Shape {
public:
    double radius;
    Circle(double r);
    void accept(ShapeVisitor& visitor) override;
};