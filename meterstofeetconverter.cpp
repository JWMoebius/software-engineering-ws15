#include "meterstofeetconverter.hpp"
#include <string>

MetersToFeetConverter::MetersToFeetConverter()
{
}

/*In: double value of meters
 *Out: feet value of input 
 */
double MetersToFeetConverter::convert(const double inputMeters) const{
  return inputMeters * 3.280839895013123 ;
}

std::string MetersToFeetConverter::toString() const{
  return "Meters to Feet Converter";
}

void MetersToFeetConverter::print() const{
  std::cout << toString();
}

UnitConverter* MetersToFeetConverter::clone() const {
  return new MetersToFeetConverter;
}