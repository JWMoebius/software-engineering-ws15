#include "meterstofeetconverter.hpp"
#include <string>

MetersToFeetConverter::MetersToFeetConverter()
{
}

/*In: double value of meters
 *Out: feet value of input 
 */
double MetersToFeetConverter::convert(double inputMeters){
  return inputMeters * 3.280839895013123 ;
}

std::string MetersToFeetConverter::toString() const{
  return "Meters to Feet Converter";
}

void MetersToFeetConverter::print() const{
  std::cout << toString();
}