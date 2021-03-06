#include "celsiustofahrenheitconverter.hpp"

#include <string>


CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{}
CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter(UnitConverter* m_base)
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

double CelsiusToFahrenheitConverter::convert(const double inputCelsius) const{
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
      return (temp*1.8)+32;    
    }  
    return (inputCelsius*1.8)+32;
    }
    catch (input_error & except) {
      std::cout <<std::endl<< "Input Parameter for CelsiusToFahrenheit Conversion is out of range:"  << except.what(inputCelsius) << std::endl;
	  std::cout << std::endl <<"Stop conversion for save exit." << std::endl;
	  exit(1);
  }
}

std::string CelsiusToFahrenheitConverter::toString() const{
  return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
  std::cout << toString();
}

UnitConverter* CelsiusToFahrenheitConverter::clone() const {
  return new CelsiusToFahrenheitConverter;
}