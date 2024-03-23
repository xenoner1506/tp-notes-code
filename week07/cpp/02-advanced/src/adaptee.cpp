#include "adaptee.hpp"

FahrenheitThermometer::FahrenheitThermometer(float value) : temperature(value) { }

float FahrenheitThermometer::getFahrenheitTemperature() const {
    return temperature;
}

void FahrenheitThermometer::adjust() { }