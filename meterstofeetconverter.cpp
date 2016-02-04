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
  try {
    if (inputMeters < 0) {
	  std::stringstream temp; 
	  temp << inputMeters;
	  std::string error_arg;
	  temp.str(error_arg);
      throw input_error();
    }
    if (m_base_ != nullptr) {
      double temp = m_base_->convert(inputMeters);
      return (temp * 3.280839895013123);    
    }
    return inputMeters * 3.280839895013123 ;
  }
    catch (input_error & except) {
      std::cout << std::endl<< "Input Parameter for MetersToFeet Conversion is out of range:"  << except.what(inputMeters) << std::endl;
	  std::cout << std::endl <<"Stop conversion for save exit." << std::endl;
	  exit(1);
  }
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