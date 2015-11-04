#ifndef CELSIUSTOKELVINCONVERTER_HPP
#define CELSIUSTOKELVINCONVERTER_HPP

#include "temperatureconverter.hpp"

class CelsiusToKelvinConverter : public TemperatureConverter
{
  public:
    CelsiusToKelvinConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
};

#endif // CELSIUSTOKELVINCONVERTER_HPP
