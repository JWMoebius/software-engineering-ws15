#include "CelsiusToFahrenheitConverter.hpp"

#include <string>

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{
}

double CelsiusToFahrenheitConverter::convert(double inputCelsius){
  return (inputCelsius*1.8)+32;
}

std::string CelsiusToFahrenheitConverter::toString() const{
  return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
  std::cout << toString();
}
