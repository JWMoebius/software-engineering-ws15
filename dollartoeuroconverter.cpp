#include "dollartoeuroconverter.hpp"

#include <string>

DollarToEuroConverter::DollarToEuroConverter()
{}
DollarToEuroConverter::DollarToEuroConverter(UnitConverter* m_base)
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
double DollarToEuroConverter::convert(const double inputDollars) const{
  if (m_base_ != nullptr) {
    double temp = m_base_->convert(inputDollars);
    return (temp *0.88);    
  }
  return inputDollars*0.88;
}

std::string DollarToEuroConverter::toString() const{
  return "Dollar to Euro Converter";
}

void DollarToEuroConverter::print() const{
  std::cout << toString();
}

UnitConverter* DollarToEuroConverter::clone() const {
  return new DollarToEuroConverter;
}