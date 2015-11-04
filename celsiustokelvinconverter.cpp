#include "celsiustokelvinconverter.hpp"

#include <string>

CelsiusToKelvinConverter::CelsiusToKelvinConverter()
{
}

/*In: double value of Celsius
 *Out: Kelvin value 
 */
double CelsiusToKelvinConverter::convert(double inputCelsius){
  return inputCelsius+273.15;
}

std::string CelsiusToKelvinConverter::toString() const{
  return "Celsius to Kelvin Converter";
}

void CelsiusToKelvinConverter::print() const{
  std::cout << toString();
}
