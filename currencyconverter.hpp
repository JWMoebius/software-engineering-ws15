#ifndef CURRENCY_CONVERTER_HPP
#define CURRENCY_CONVERTER_HPP

#include "unitconverter.hpp"

class CurrencyConverter : public UnitConverter
{
  public:
    CurrencyConverter();
    virtual double convert(double inValue) = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // CURRENCY_CONVERTER_HPP
