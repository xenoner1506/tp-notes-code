#pragma once
#include "sensor.hpp"
#include "adaptee.hpp"

class CelsiusThermometerAdapter: public Sensor {
    FahrenheitThermometer *thermometer;
    public:
        CelsiusThermometerAdapter(FahrenheitThermometer*);
        float getTemperature() const override;
        void adjust() override;
};

class CelsiusThermometerAdapter2: public Sensor, private FahrenheitThermometer {
    public:
        CelsiusThermometerAdapter2(float);
        float getTemperature() const override;
        void adjust() override;
};
