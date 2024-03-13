#pragma once

class Sensor {
    public:
        virtual float getTemperature() const = 0;
        virtual void adjust() = 0;
        virtual ~Sensor() {}
};
