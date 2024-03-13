#include <iostream>
#include "Circle.hpp"

CircleShape::CircleShape(double x, double y,double radius, Drawer *drawer) :
    m_x(x), m_y(y), m_radius(radius), m_drawer(drawer) { }

void CircleShape::draw() {
    m_drawer->drawCircle(m_x, m_y, m_radius);
}

void CircleShape::resizeByPercentage(double pct) {
    m_radius *= pct;
}

CircleShape::~CircleShape() {
    delete m_drawer;
}
