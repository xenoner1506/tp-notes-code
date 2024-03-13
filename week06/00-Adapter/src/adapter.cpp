#include "adapter.hpp"

CelsiusThermometerAdapter::CelsiusThermometerAdapter(FahrenheitThermometer* t) : thermometer(t) { }

float CelsiusThermometerAdapter::getTemperature() const {
    return (thermometer->getFahrenheitTemperature() - 32) * 5 / 9;
}

void CelsiusThermometerAdapter::adjust() {
    thermometer->adjust();
}

CelsiusThermometerAdapter2::CelsiusThermometerAdapter2(float value) : FahrenheitThermometer(value) { }

float CelsiusThermometerAdapter2::getTemperature() const {
    return (FahrenheitThermometer::getFahrenheitTemperature() - 32) * 5 / 9;
}

void CelsiusThermometerAdapter2::adjust() {
    FahrenheitThermometer::adjust();
}