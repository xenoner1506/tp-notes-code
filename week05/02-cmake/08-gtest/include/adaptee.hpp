#pragma once

class FahrenheitThermometer {
    private:
        float temperature = 0;
    public:
        explicit FahrenheitThermometer(float);
        float getFahrenheitTemperature() const;
    // protected:
        void adjust();
};
