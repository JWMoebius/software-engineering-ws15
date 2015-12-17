#include "kelvintocelsiusconverter.hpp"

#include <string>

KelvinToCelsiusConverter::KelvinToCelsiusConverter()
{}
KelvinToCelsiusConverter::KelvinToCelsiusConverter(UnitConverter* m_base)
  :  TemperatureConverter{m_base}
{}
/*In: double value of Kelvin
 *Out: Celsius value
 */
double KelvinToCelsiusConverter::convert(const double inputKelvin) const{
  if (m_base_ != nullptr) {
    double temp = m_base_->convert(inputKelvin);
    return (temp-273.15);    
  }
  return inputKelvin-273.15;
}

std::string KelvinToCelsiusConverter::toString() const{
  return "Kelvin to Celsius Converter";
}

void KelvinToCelsiusConverter::print() const{
  std::cout << toString();
}

UnitConverter* KelvinToCelsiusConverter::clone() const{
  return new KelvinToCelsiusConverter;
}