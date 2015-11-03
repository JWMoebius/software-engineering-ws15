#ifndef DOLLARTOPOUNDCONVERTER_HPP
#define DOLLARTOPOUNDCONVERTER_HPP

#include "unitconverter.hpp"

class DollarToPoundConverter : public UnitConverter
{
  public:
    DollarToPoundConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOPOUNDCONVERTER_HPP
