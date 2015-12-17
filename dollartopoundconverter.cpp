#include "dollartopoundconverter.hpp"

#include <string>

DollarToPoundConverter::DollarToPoundConverter()
{}
DollarToPoundConverter::DollarToPoundConverter(UnitConverter* m_base)
  :  CurrencyConverter{m_base}
{
	  if (m_base_ != nullptr) { 
	    std::stringstream converterStream ( m_base_->toString());
		std::string converterName;
		converterStream >> converterName; //Input Type
		converterStream >> converterName; //TO
		converterStream >> converterName; //Final result type <-- this one is important
	    if (converterName != "Dollar" ) {
	      std::cout << "Cannot link converters from these types.[Needs converter with Dollar output]" << std::endl;
		  exit(1);
	    }
	  }
}
/*In: double value of dollars
 *Out: Euro value of input dollars as of 9.10.15
 */
double DollarToPoundConverter::convert(const double inputDollars) const {
  if (m_base_ != nullptr) {
    double temp = m_base_->convert(inputDollars);
    return (temp * 0.64851);    
  }
  return inputDollars * 0.64851;
}

std::string DollarToPoundConverter::toString() const{
  return "Dollar to Pound Converter";
}

void DollarToPoundConverter::print() const{
  std::cout << toString();
}

UnitConverter* DollarToPoundConverter::clone() const {
  return new DollarToPoundConverter;
}