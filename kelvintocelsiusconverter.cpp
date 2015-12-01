#include "kelvintocelsiusconverter.hpp"

#include <string>

KelvinToCelsiusConverter::KelvinToCelsiusConverter()
{
}

/*In: double value of Kelvin
 *Out: Celsius value
 */
double KelvinToCelsiusConverter::convert(const double inputKelvin) const{
  return inputKelvin-273.15;
}

std::string KelvinToCelsiusConverter::toString() const{
  return "Kelvin to Celsius Converter";
}

void KelvinToCelsiusConverter::print() const{
  std::cout << toString();
}
