#ifndef CELIUSTOFAHRENHEITCONVERTER_H
#define CELIUSTOFAHRENHEITCONVERTER_H

#include "temperatureconverter.hpp"

class CelsiusToFahrenheitConverter : public TemperatureConverter
{
  public:
    CelsiusToFahrenheitConverter();
    double convert(const double inCelsius) const;
    std::string toString() const;
    void print() const;
};

#endif // CELIUSTOFAHRENHEITCONVERTER_H