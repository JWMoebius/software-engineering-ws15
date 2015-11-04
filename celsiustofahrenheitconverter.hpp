#ifndef CELIUSTOFAHRENHEITCONVERTER_H
#define CELIUSTOFAHRENHEITCONVERTER_H

#include "temperatureconverter.hpp"

class CelsiusToFahrenheitConverter : public TemperatureConverter
{
  public:
    CelsiusToFahrenheitConverter();
    double convert(double inCelsius);
    std::string toString() const;
    void print() const;
};

#endif // CELIUSTOFAHRENHEITCONVERTER_H