#include "meterstofeetconverter.hpp"
#include <string>

MetersToFeetConverter::MetersToFeetConverter()
{}
MetersToFeetConverter::MetersToFeetConverter(UnitConverter* m_base)
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
 *Out: feet value of input 
 */
double MetersToFeetConverter::convert(const double inputMeters) const{
  if (m_base_ != nullptr) {
    double temp = m_base_->convert(inputMeters);
    return (temp * 3.280839895013123);    
  }
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