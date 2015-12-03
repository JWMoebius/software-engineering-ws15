#ifndef METERSTOFEETCONVERTER_HPP
#define METERSTOFEETCONVERTER_HPP

#include "lengthconverter.hpp"

class MetersToFeetConverter : public LengthConverter
{
  public:
    MetersToFeetConverter();
    double convert(const double inMeters) const;
    std::string toString() const;
    void print() const;
	UnitConverter* clone() const;
};

#endif // METERSTOFEETCONVERTER_HPP
