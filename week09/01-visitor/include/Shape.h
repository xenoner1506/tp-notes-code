#pragma once
#include "ShapeVisitor.h"

class Shape {
public:
    virtual void accept(ShapeVisitor& visitor) = 0;
};