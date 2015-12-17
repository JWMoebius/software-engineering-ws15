#ifndef CELIUSTOFAHRENHEITCONVERTER_H
#define CELIUSTOFAHRENHEITCONVERTER_H

#include "temperatureconverter.hpp"

class CelsiusToFahrenheitConverter : public TemperatureConverter
{
  public:
    CelsiusToFahrenheitConverter();
	CelsiusToFahrenheitConverter(UnitConverter* m_base);
    double convert(const double inCelsius) const override;
    std::string toString() const override;
    void print() const override;
	UnitConverter* clone() const override;
};

#endif // CELIUSTOFAHRENHEITCONVERTER_H