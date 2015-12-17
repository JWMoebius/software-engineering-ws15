#include "meterstomilesconverter.hpp"
#include <string>

MetersToMilesConverter::MetersToMilesConverter()
{}
MetersToMilesConverter::MetersToMilesConverter(UnitConverter* m_base)
  :  LengthConverter{m_base}
{
	  if (m_base_ != nullptr) { 
	    std::stringstream converterStream ( m_base_->toString());
		std::string converterName;
		converterStream >> converterName; //Input Type
		converterStream >> converterName; //TO
		converterStream >> converterName; //Final result type <-- this one is important
	    if (converterName != "Meters" ) {
	      std::cout << "Cannot link converters from these types.[Needs converter with Meters output]" << std::endl;
		  exit(1);
	    }
	  }
}
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