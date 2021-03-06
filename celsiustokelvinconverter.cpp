#include "celsiustokelvinconverter.hpp"

#include <string>

CelsiusToKelvinConverter::CelsiusToKelvinConverter()
{}
CelsiusToKelvinConverter::CelsiusToKelvinConverter(UnitConverter* m_base)
  :  TemperatureConverter{m_base}
{
	  if (m_base_ != nullptr) { 
	    std::stringstream converterStream ( m_base_->toString());
		std::string converterName;
		converterStream >> converterName; //Input Type
		converterStream >> converterName; //TO
		converterStream >> converterName; //Final result type <-- this one is important
	    if (converterName != "Celsius" ) {
	      std::cout << "Cannot link converters from these types.[Needs converter with Celsius output]" << std::endl;
		  exit(1);
	    }
	  }
}

/*In: double value of Celsius
 *Out: Kelvin value 
 */
double CelsiusToKelvinConverter::convert(const double inputCelsius) const{
  try {
    if (inputCelsius < -273.15) {
	  std::stringstream temp; 
	  temp << inputCelsius;
	  std::string error_arg;
	  temp.str(error_arg);
      throw input_error();
    }
    if (m_base_ != nullptr) {
      double temp = m_base_->convert(inputCelsius);
      return (temp + 273.15);    
    }
    return inputCelsius+273.15;
  }
    catch (input_error & except) {
      std::cout <<std::endl<< "Input Parameter for CelsiusToKelvin Conversion is out of range:"  << except.what(inputCelsius) << std::endl;
	  std::cout << std::endl <<"Stop conversion for save exit." << std::endl;
	  exit(1);
  }
}

std::string CelsiusToKelvinConverter::toString() const{
  return "Celsius to Kelvin Converter";
}

void CelsiusToKelvinConverter::print() const{
  std::cout << toString();
}

UnitConverter* CelsiusToKelvinConverter::clone() const{
  return new CelsiusToKelvinConverter;
}

