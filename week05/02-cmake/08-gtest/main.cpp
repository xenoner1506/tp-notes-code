#include <iostream>
#include "adaptee.hpp"

int main() {
    FahrenheitThermometer *fahr_thermometer = new FahrenheitThermometer(-40);
    std::cout << "Fahrenheit: " << fahr_thermometer->getFahrenheitTemperature() << std::endl;
}