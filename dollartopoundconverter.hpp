#ifndef DOLLARTOPOUNDCONVERTER_HPP
#define DOLLARTOPOUNDCONVERTER_HPP

#include "currencyconverter.hpp"

class DollarToPoundConverter : public CurrencyConverter
{
  public:
    DollarToPoundConverter();
    DollarToPoundConverter(UnitConverter* m_base);
    double convert(const double inDollars) const;
    std::string toString() const;
    void print() const;
	UnitConverter* clone() const;
};

#endif // DOLLARTOPOUNDCONVERTER_HPP
