#ifndef YARDSTOMETERSCONVERTER_HPP
#define YARDSTOMETERSCONVERTER_HPP

#include "lengthconverter.hpp"

class YardsToMetersConverter : public LengthConverter
{
  public:
    YardsToMetersConverter();
    double convert(const double inMards) const;
    std::string toString() const;
    void print() const;
	UnitConverter* clone() const;
};

#endif // YARDSTOMETERSCONVERTER_HPP
