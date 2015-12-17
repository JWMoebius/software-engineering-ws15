#ifndef YARDSTOMETERSCONVERTER_HPP
#define YARDSTOMETERSCONVERTER_HPP

#include "lengthconverter.hpp"

class YardsToMetersConverter : public LengthConverter
{
  public:
    YardsToMetersConverter();
    YardsToMetersConverter(UnitConverter* m_base);

    double convert(const double inYards) const override;
    std::string toString() const override;
    void print() const override;
	UnitConverter* clone() const override;
};

#endif // YARDSTOMETERSCONVERTER_HPP
