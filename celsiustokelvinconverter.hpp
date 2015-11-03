#ifndef CELSIUSTOKELVINCONVERTER_HPP
#define CELSIUSTOKELVINCONVERTER_HPP

#include "unitconverter.hpp"

class CelsiusToKelvinConverter : public UnitConverter
{
  public:
    CelsiusToKelvinConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
};

#endif // CELSIUSTOKELVINCONVERTER_HPP
