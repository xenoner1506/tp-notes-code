#pragma once
#include "Drawer.hpp"
#include "Shape.hpp"

class CircleShape : public Shape {
    public:
        CircleShape(double x, double y,double radius, Drawer *drawer);
        void draw();
        void resizeByPercentage(double pct);
        ~CircleShape();
    private:
        double m_x, m_y, m_radius;
        Drawer *m_drawer;
};


