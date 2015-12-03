#include "celsiustokelvinconverter.hpp"

#include <string>

CelsiusToKelvinConverter::CelsiusToKelvinConverter()
{
}

/*In: double value of Celsius
 *Out: Kelvin value 
 */
double CelsiusToKelvinConverter::convert(const double inputCelsius) const{
  return inputCelsius+273.15;
}

std::string CelsiusToKelvinConverter::toString() const{
  return "Celsius to Kelvin Converter";
}

void CelsiusToKelvinConverter::print() const{
  std::cout << toString();
}

UnitConverter* CelsiusToKelvinConverter::clone() const{
  return new CelsiusToKelvinConverter;
}

