#ifndef CELSIUSTOKELVINCONVERTER_HPP
#define CELSIUSTOKELVINCONVERTER_HPP

#include "temperatureconverter.hpp"

class CelsiusToKelvinConverter : public TemperatureConverter
{
  public:
    CelsiusToKelvinConverter();
    CelsiusToKelvinConverter(UnitConverter* m_base);
    double convert(const double inCelsius) const override;
    std::string toString() const override;
    void print() const override;
	UnitConverter* clone() const override;
};

#endif // CELSIUSTOKELVINCONVERTER_HPP
