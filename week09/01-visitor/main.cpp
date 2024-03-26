#include <iostream>
#include "AreaVisitor.h"

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    AreaVisitor areaCalculator;

    circle.accept(areaCalculator);
    rectangle.accept(areaCalculator);

    return 0;
}