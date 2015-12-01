#ifndef TEMPERATURE_CONVERTER_HPP
#define TEMPERATURE_CONVERTER_HPP

#include "unitconverter.hpp"

class TemperatureConverter : public UnitConverter
{
  public:
    TemperatureConverter();
    virtual double convert(const double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // TEMPERATURE_CONVERTER_HPP
