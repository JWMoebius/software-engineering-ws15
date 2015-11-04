#ifndef DOLLARTOPOUNDCONVERTER_HPP
#define DOLLARTOPOUNDCONVERTER_HPP

#include "currencyconverter.hpp"

class DollarToPoundConverter : public CurrencyConverter
{
  public:
    DollarToPoundConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOPOUNDCONVERTER_HPP
