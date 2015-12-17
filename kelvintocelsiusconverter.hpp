#ifndef KELVINTOCELSIUSCONVERTER_HPP
#define KELVINTOCELSIUSCONVERTER_HPP

#include "temperatureconverter.hpp"

class KelvinToCelsiusConverter : public TemperatureConverter
{
  public:
    KelvinToCelsiusConverter();
    KelvinToCelsiusConverter(UnitConverter* m_base);
	double convert(const double inKelvin) const override;
    std::string toString() const override;
    void print() const override;
	UnitConverter* clone() const override;
};

#endif // KELVINTOCELSIUSCONVERTER_HPP
