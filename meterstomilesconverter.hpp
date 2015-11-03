#ifndef METERSTOMILESCONVERTER_HPP
#define METERSTOMILESCONVERTER_HPP

#include "unitconverter.hpp"

class MetersToMilesConverter : public UnitConverter
{
  public:
    MetersToMilesConverter();
    double convert(double inMeters);
    std::string toString() const;
    void print() const;
};

#endif // METERSTOMILESCONVERTER_HPP
