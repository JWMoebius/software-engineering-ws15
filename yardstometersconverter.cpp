#include "yardstometersconverter.hpp"
#include <string>

YardsToMetersConverter::YardsToMetersConverter()
{}
YardsToMetersConverter::YardsToMetersConverter(UnitConverter* m_base)
  :  LengthConverter{m_base}
{}

/*In: double value of yards
 *Out: meters value of input 
 */
double YardsToMetersConverter::convert(const double inYards) const{
  if (m_base_ != nullptr) {
    double temp = m_base_->convert(inYards);
    return (temp* 0.9144);    
  }

  return (inYards * 0.9144);
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