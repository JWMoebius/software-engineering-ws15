#ifndef METERSTOMILESCONVERTER_HPP
#define METERSTOMILESCONVERTER_HPP

#include "lengthconverter.hpp"

class MetersToMilesConverter : public LengthConverter
{
  public:
    MetersToMilesConverter();
    double convert(double inMeters);
    std::string toString() const;
    void print() const;
};

#endif // METERSTOMILESCONVERTER_HPP
