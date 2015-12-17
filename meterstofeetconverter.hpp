#ifndef METERSTOFEETCONVERTER_HPP
#define METERSTOFEETCONVERTER_HPP

#include "lengthconverter.hpp"

class MetersToFeetConverter : public LengthConverter
{
  public:
    MetersToFeetConverter();
    MetersToFeetConverter(UnitConverter* m_base) ;
    double convert(const double inMeters) const override;
    std::string toString() const override;
    void print() const override;
	UnitConverter* clone() const override;
};

#endif // METERSTOFEETCONVERTER_HPP
