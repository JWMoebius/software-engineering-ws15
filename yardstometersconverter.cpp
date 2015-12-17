#include "yardstometersconverter.hpp"
#include <string>

YardsToMetersConverter::YardsToMetersConverter()
{
}

/*In: double value of yards
 *Out: meters value of input 
 */
double YardsToMetersConverter::convert(const double inputMeters) const{
  return inputMeters / 0.9144 ;
}

std::string YardsToMetersConverter::toString() const{
  return "Yards to Meters Converter";
}

void YardsToMetersConverter::print() const{
  std::cout << toString();
}

UnitConverter* YardsToMetersConverter::clone() const{
  return new YardsToMetersConverter;
}