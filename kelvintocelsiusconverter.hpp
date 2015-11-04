#ifndef KELVINTOCELSIUSCONVERTER_HPP
#define KELVINTOCELSIUSCONVERTER_HPP

#include "temperatureconverter.hpp"

class KelvinToCelsiusConverter : public TemperatureConverter
{
  public:
    KelvinToCelsiusConverter();
    double convert(double inKelvin);
    std::string toString() const;
    void print() const;
};

#endif // KELVINTOCELSIUSCONVERTER_HPP
