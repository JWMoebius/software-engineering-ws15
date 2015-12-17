#include "celsiustofahrenheitconverter.hpp"

#include <string>

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{}
CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter(UnitConverter* m_base)
  :  TemperatureConverter{m_base}
{}

double CelsiusToFahrenheitConverter::convert(const double inputCelsius) const{
  if (m_base_ != nullptr) {
    double temp = m_base_->convert(inputCelsius);
    return (temp*1.8)+32;    
  }  
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