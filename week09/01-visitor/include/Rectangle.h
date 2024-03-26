#pragma once
#include "Shape.h"

class Rectangle : public Shape {
public:
    double width;
    double height;

    Rectangle(double w, double h);

    void accept(ShapeVisitor& visitor) override;
};

