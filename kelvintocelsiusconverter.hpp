#ifndef KELVINTOCELSIUSCONVERTER_HPP
#define KELVINTOCELSIUSCONVERTER_HPP

#include "temperatureconverter.hpp"

class KelvinToCelsiusConverter : public TemperatureConverter
{
  public:
    KelvinToCelsiusConverter();
    double convert(const double inKelvin) const;
    std::string toString() const;
    void print() const;
};

#endif // KELVINTOCELSIUSCONVERTER_HPP
