#ifndef CONVERTERFACTORY_H
#define CONVERTERFACTORY_H
#include <map>
#include <memory>
#include <cstdlib>
#include <iostream>
#include "celsiustofahrenheitconverter.hpp"
#include "celsiustokelvinconverter.hpp"
#include "dollartoeuroconverter.hpp"
#include "dollartopoundconverter.hpp"
#include "kelvintocelsiusconverter.hpp"
#include "meterstomilesconverter.hpp"
#include "meterstofeetconverter.hpp"

class ConverterFactory {
  private:
    int m_value;
    static ConverterFactory* factory_instance;
    ConverterFactory( int v = 0 ) { m_value = v; }
    std::map<std::string, UnitConverter*> converter_map = 
	{
	{"CelsiusToFahrenheit", new CelsiusToFahrenheitConverter},
	{"CelsiusToKelvin", new CelsiusToKelvinConverter},
	{"DollarToEuro", new DollarToEuroConverter},
	{"DollarToPound", new DollarToPoundConverter},
	{"KelvinToCelsius", new KelvinToCelsiusConverter},
	{"MeterToMile", new MetersToMilesConverter},
	{"MeterToFoot", new MetersToFeetConverter}
	};
  public:
    void test() { std::cout << "Everything's fine. Keep up the good work." << std::endl; }
    int get_value() { return m_value; }
    void set_value( int v ) { m_value = v; }
    static ConverterFactory* instance() {
      if ( factory_instance == nullptr ) {
        factory_instance = new ConverterFactory;
      }
	  return factory_instance;
    }
	UnitConverter* create2(std::string conversion) {
      std::map<std::string, UnitConverter*>::iterator it = converter_map.find(conversion);
	  if ( it == converter_map.end() ) {
     	    std::cout << "Conversion type \"" << conversion <<"\" doesn't exist." << std::endl << "Please consult std::map in converterFactory.hpp to see all existing conversions." << std::endl;
			exit(1);
			return nullptr;
      }	 else {
	      return it->second->clone();
      }	  
	
	}
	std::shared_ptr<UnitConverter> create(std::string conversion) {
      if ("CelsiusToFahrenheit" == conversion) {
		auto myConverter = std::make_shared<CelsiusToFahrenheitConverter>();
        return myConverter;
	  }
      else if ("CelsiusToKelvin" == conversion) {
        auto myConverter = std::make_shared<CelsiusToKelvinConverter>();
        return myConverter;
      }
      else if ("DollarToEuro" == conversion) {
        auto myConverter = std::make_shared<DollarToEuroConverter>();
        return myConverter;
      }
      else if ("DollarToPound" == conversion) {
        auto myConverter = std::make_shared<DollarToPoundConverter>();
        return myConverter;
      }
      else if ("KelvinToCelsius" == conversion) {
        auto myConverter = std::make_shared<KelvinToCelsiusConverter>();
        return myConverter;
      }
      else if ("MeterToMile" == conversion || "MetreToMile" == conversion || "MetresToMiles" == conversion || "MetersToMiles" == conversion) {
        auto myConverter = std::make_shared<MetersToMilesConverter>();
        return myConverter;
      }
      else if ("MeterToFoot" == conversion || "MetreToFoot" == conversion || "MetresToFeet" == conversion || "MetersToFeet" == conversion) {
        auto myConverter = std::make_shared<MetersToFeetConverter>();
        return myConverter;
      }
      else{	
	  	std::cout << "Conversion type \"" << conversion <<"\" doesn't exist." << std::endl << "Please consult std::map in converterFactory.hpp to see all existing conversions." << std::endl;
        exit(1);
	  }
	}
};
// Allocating and initializing ConverterFactory's
// static data member. The pointer is being
// allocated here - not the object itself.
ConverterFactory* ConverterFactory::factory_instance = nullptr;


#endif // CONVERTERFACTORY_H