#include "meterstomilesconverter.hpp"
#include <string>

MetersToMilesConverter::MetersToMilesConverter()
{
}

/*In: double value of meters
 *Out: miles value of input dollars as of 9.10.15
 */
double MetersToMilesConverter::convert(const double inputMeters) const{
  return inputMeters * 0.000621371192 ;
}

std::string MetersToMilesConverter::toString() const{
  return "Meters to Miles Converter";
}

void MetersToMilesConverter::print() const{
  std::cout << toString();
}
