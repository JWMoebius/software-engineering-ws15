#include "celsiustofahrenheitconverter.hpp"

#include <string>

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{
}

double CelsiusToFahrenheitConverter::convert(const double inputCelsius) const{
  return (inputCelsius*1.8)+32;
}

std::string CelsiusToFahrenheitConverter::toString() const{
  return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
  std::cout << toString();
}

UnitConverter* CelsiusToFahrenheitConverter::clone() const {
  return new CelsiusToFahrenheitConverter;
}