#include <iostream>
#include "adaptee.hpp"
#include "adapter.hpp"

int main() {
    FahrenheitThermometer *fahr_thermometer = new FahrenheitThermometer(-40);
    Sensor *adapter = new CelsiusThermometerAdapter(fahr_thermometer);
    std::cout << "Fahrenheit: " << fahr_thermometer->getFahrenheitTemperature() << std::endl;
    std::cout << "Celsius: " << adapter->getTemperature() << std::endl;
}