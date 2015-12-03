#ifndef METERSTOMILESCONVERTER_HPP
#define METERSTOMILESCONVERTER_HPP

#include "lengthconverter.hpp"

class MetersToMilesConverter : public LengthConverter
{
  public:
    MetersToMilesConverter();
    double convert(const double inMeters) const;
    std::string toString() const;
    void print() const;
	UnitConverter* clone() const;
};

#endif // METERSTOMILESCONVERTER_HPP
