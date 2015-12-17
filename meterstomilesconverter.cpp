#include "meterstomilesconverter.hpp"
#include <string>

MetersToMilesConverter::MetersToMilesConverter()
{}
MetersToMilesConverter::MetersToMilesConverter(UnitConverter* m_base)
  :  LengthConverter{m_base}
{}
/*In: double value of meters
 *Out: miles value of input dollars as of 9.10.15
 */
double MetersToMilesConverter::convert(const double inputMeters) const{
  if (m_base_ != nullptr) {
    double temp = m_base_->convert(inputMeters);
    return (temp * 0.000621371192);    
  }
  return inputMeters * 0.000621371192 ;
}

std::string MetersToMilesConverter::toString() const{
  return "Meters to Miles Converter";
}

void MetersToMilesConverter::print() const{
  std::cout << toString();
}

UnitConverter* MetersToMilesConverter::clone() const{
  return new MetersToMilesConverter;
}