#include "yardstometersconverter.hpp"
#include <string>

YardsToMetersConverter::YardsToMetersConverter()
{}
YardsToMetersConverter::YardsToMetersConverter(UnitConverter* m_base)
  :  LengthConverter{m_base}
{
	  if (m_base_ != nullptr) { 
	    std::stringstream converterStream ( m_base_->toString());
		std::string converterName;
		converterStream >> converterName; //Input Type
		converterStream >> converterName; //TO
		converterStream >> converterName; //Final result type <-- this one is important
	    if (converterName != "Yards" ) {
	      std::cout << "Cannot link converters from these types.[Needs converter with Yards output]" << std::endl;
		  exit(1);
	    }
	  }
}

/*In: double value of yards
 *Out: meters value of input 
 */
double YardsToMetersConverter::convert(const double inYards) const{
  try {
    if (inYards < 0) {
	  std::stringstream temp; 
	  temp << inYards;
	  std::string error_arg;
	  temp.str(error_arg);
      throw input_error();
    }
    if (m_base_ != nullptr) {
      double temp = m_base_->convert(inYards);
      return (temp* 0.9144);    
    }
    return (inYards * 0.9144);
  }
    catch (input_error & except) {
      std::cout << std::endl << "Input Parameter for YardsToMeters Conversion is out of range:"  << except.what(inYards) << std::endl;
	  std::cout << std::endl <<"Stop conversion for save exit." << std::endl;
	  exit(1);
  }
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