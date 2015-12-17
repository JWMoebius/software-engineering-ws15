#include "kelvintocelsiusconverter.hpp"

#include <string>

KelvinToCelsiusConverter::KelvinToCelsiusConverter()
{}
KelvinToCelsiusConverter::KelvinToCelsiusConverter(UnitConverter* m_base)
  :  TemperatureConverter{m_base}
{
	  if (m_base_ != nullptr) { 
	    std::stringstream converterStream ( m_base_->toString());
		std::string converterName;
		converterStream >> converterName; //Input Type
		converterStream >> converterName; //TO
		converterStream >> converterName; //Final result type <-- this one is important
	    if (converterName != "Kelvin" ) {
	      std::cout << "Cannot link converters from these types.[Needs converter with Kelvin output]" << std::endl;
		  exit(1);
	    }
	  }
}
/*In: double value of Kelvin
 *Out: Celsius value
 */
double KelvinToCelsiusConverter::convert(const double inputKelvin) const{
  if (m_base_ != nullptr) {
    double temp = m_base_->convert(inputKelvin);
    return (temp-273.15);    
  }
  return inputKelvin-273.15;
}

std::string KelvinToCelsiusConverter::toString() const{
  return "Kelvin to Celsius Converter";
}

void KelvinToCelsiusConverter::print() const{
  std::cout << toString();
}

UnitConverter* KelvinToCelsiusConverter::clone() const{
  return new KelvinToCelsiusConverter;
}