#pragma once
#include "Circle.h"
#include "Rectangle.h"
#include "ShapeVisitor.h"

class AreaVisitor : public ShapeVisitor {
public:
    void visit(Circle& circle) override;
    void visit(Rectangle& rectangle) override;
};