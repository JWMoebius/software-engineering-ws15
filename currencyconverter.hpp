#ifndef CURRENCY_CONVERTER_HPP
#define CURRENCY_CONVERTER_HPP

#include "unitconverter.hpp"

class CurrencyConverter : public UnitConverter
{
  public:
    CurrencyConverter();
    virtual double convert(const double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
	virtual UnitConverter* clone() const = 0;
};

#endif // CURRENCY_CONVERTER_HPP
