#include <iostream>
#include <memory>
#include <string>
#include <sstream>
#include "celsiustofahrenheitconverter.hpp"
#include "celsiustokelvinconverter.hpp"
#include "dollartoeuroconverter.hpp"
#include "dollartopoundconverter.hpp"
#include "kelvintocelsiusconverter.hpp"
#include "meterstomilesconverter.hpp"
#include "meterstofeetconverter.hpp"

int main(int argc, char* argv[])
{
  std::string conversion = argv[1];
  std::string string_value = argv[2];
  std::stringstream passed_double(string_value);
  double value = 0.0;
  passed_double >> value;

  if ("CelsiusToFahrenheit" == conversion) {
    auto myConverter = std::make_shared<CelsiusToFahrenheitConverter>();
    double aLotOfFahrenheit = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Celsius to " << aLotOfFahrenheit <<" Fahrenheit!" << std::endl;
  }
  else if ("CelsiusToKelvin" == conversion) {
    auto myConverter = std::make_shared<CelsiusToKelvinConverter>();
    double aLotOfKelvin = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Celsius to " << aLotOfKelvin <<" Kelvin!" << std::endl;
  }
  else if ("DollarToEuro" == conversion) {
    auto myConverter = std::make_shared<DollarToEuroConverter>();
    double aLotOfEuros = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Dollar to " << aLotOfEuros <<" Euronen!" << std::endl;
  }
  else if ("DollarToPound" == conversion) {
    auto myConverter = std::make_shared<DollarToPoundConverter>();
    double aLotOfPound = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Dollar to " << aLotOfPound <<" Pound!" << std::endl;
  }
  else if ("KelvinToCelsius" == conversion) {
    auto myConverter = std::make_shared<KelvinToCelsiusConverter>();
    double aLotOfCelsius = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Kelvin to " << aLotOfCelsius <<" Celsius!" << std::endl;
  }
  else if ("MeterToMile" == conversion || "MetreToMile" == conversion || "MetresToMiles" == conversion || "MetersToMiles" == conversion) {
    auto myConverter = std::make_shared<MetersToMilesConverter>();
    double aLotOfMiles = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Metres to " << aLotOfMiles <<" Miles!" << std::endl;
  }
  else if ("MeterToFoot" == conversion || "MetreToFoot" == conversion || "MetresToFeet" == conversion || "MetersToFeet" == conversion) {
      auto myConverter = std::make_shared<MetersToFeetConverter>();
    double aLotOfFeet = myConverter->convert(value);
    std::cout << myConverter->toString() << " has converted "<< value << " Metres to " << aLotOfFeet <<" Feet!" << std::endl;
  }
  else{	
	std::cout << "Conversion type" << conversion <<" doesn't exist. Please consult if statement in main.cpp to see all existing conversions." << std::endl;
  }
  return 0;
}

