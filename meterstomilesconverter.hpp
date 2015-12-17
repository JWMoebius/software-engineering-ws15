#ifndef METERSTOMILESCONVERTER_HPP
#define METERSTOMILESCONVERTER_HPP

#include "lengthconverter.hpp"

class MetersToMilesConverter : public LengthConverter
{
  public:
    MetersToMilesConverter();
    MetersToMilesConverter(UnitConverter* m_base);
    double convert(const double inMeters) const override;
    std::string toString() const override;
    void print() const override;
	UnitConverter* clone() const override;
};

#endif // METERSTOMILESCONVERTER_HPP
