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
#include "yardstometersconverter.hpp"

class ConverterFactory {
  private:
    int m_value;
    static ConverterFactory* factory_instance;
    ConverterFactory( int v = 0 ) { m_value = v; }
    std::map<std::string, std::shared_ptr<UnitConverter>> converter_map = 
	{
	{"CelsiusToFahrenheit", std::make_shared<CelsiusToFahrenheitConverter>()},
	{"CelsiusToKelvin", std::make_shared<CelsiusToKelvinConverter>() },
	{"DollarToEuro", std::make_shared<DollarToEuroConverter>() },
	{"DollarToPound", std::make_shared<DollarToPoundConverter>() },
	{"KelvinToCelsius", std::make_shared<KelvinToCelsiusConverter>() },
	{"MeterToMile", std::make_shared<MetersToMilesConverter>() },
	{"MeterToFoot", std::make_shared<MetersToFeetConverter>() },
	{"YardsToMeters", std::make_shared<YardsToMetersConverter>() }
	};
  public:
    int get_value() { return m_value; }
    void set_value( int v ) { m_value = v; }
    static ConverterFactory* instance() {
      if ( factory_instance == nullptr ) {
        factory_instance = new ConverterFactory;
      }
	  return factory_instance;
    }
	UnitConverter* create_proto(std::string conversion) {    //Benutze Prototype Style clone-Methode der sich aus dem std::map Pool bedient

      std::map<std::string, std::shared_ptr<UnitConverter>>::iterator it = converter_map.find(conversion); //setze Itererator dort, wo sich der Wert des Eingabekeys in der Map befindet 
	  if ( it == converter_map.end() ) 
	  {    //Fehlerausgabe
     	    std::cout << "Conversion type \"" << conversion <<"\" doesn't exist." << std::endl << "Please consult std::map in converterFactory.hpp to see all existing conversions." << std::endl;
			exit(1);
			return nullptr;
      }	 else {
	  //Benutze Prototype-Design
	      return it->second->clone();
      }	  
	
	}
	std::shared_ptr<UnitConverter> create_method(std::string conversion) { //FactoryMethod benutzt Smart-Pointers/ hier kein Einsatz der Map, da dies mehr Key-Wörter erlaubt, die erkannt werden. Beispiel des Einsatzes der Map ist oben bei create_proto zu finden.
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
      else{	//Fehlerbehandlung
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