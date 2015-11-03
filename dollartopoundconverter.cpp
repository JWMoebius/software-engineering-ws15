#include "dollartopoundconverter.hpp"

#include <string>

DollarToPoundConverter::DollarToPoundConverter()
{
}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 9.10.15
 */
double DollarToPoundConverter::convert(double inputDollars){
  return inputDollars * 0.64851;
}

std::string DollarToPoundConverter::toString() const{
  return "Dollar to Euro Converter";
}

void DollarToPoundConverter::print() const{
  std::cout << toString();
}
