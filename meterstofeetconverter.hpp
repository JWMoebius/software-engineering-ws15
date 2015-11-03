#ifndef METERSTOFEETCONVERTER_HPP
#define METERSTOFEETCONVERTER_HPP

#include "unitconverter.hpp"

class MetersToFeetConverter : public UnitConverter
{
  public:
    MetersToFeetConverter();
    double convert(double inMeters);
    std::string toString() const;
    void print() const;
};

#endif // METERSTOFEETCONVERTER_HPP
