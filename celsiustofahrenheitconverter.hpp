#ifndef CELIUSTOFAHRENHEITCONVERTER_H
#define CELIUSTOFAHRENHEITCONVERTER_H

#include "unitconverter.hpp"

class CelsiusToFahrenheitConverter : public UnitConverter
{
  public:
    CelsiusToFahrenheitConverter();
    double convert(double inCelsius);
    std::string toString() const;
    void print() const;
};

#endif // CELIUSTOFAHRENHEITCONVERTER_H