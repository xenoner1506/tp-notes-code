#pragma once

class Shape {
    public:
        virtual ~Shape() {}
        virtual void draw() = 0;
        virtual void resizeByPercentage(double pct) = 0;
};