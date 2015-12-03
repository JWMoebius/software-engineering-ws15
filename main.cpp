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
#include "converterFactory.hpp"

int main(int argc, char* argv[])
{
  if(3 != argc) { //Nur drei Eingaben auf Kommandozeile erlaubt [inclusive main]
    std::cout << "False number of arguments was entered. Please only enter one Converter and Value. Execute the Program again." << std::endl;
    exit(1); //Verlasse Programm
  }
  std::string conversion;
  double value = 0.0;

  conversion = argv[1];
  std::string string_value = argv[2];
  std::stringstream passed_double(string_value);

  if (!(passed_double >> value)) { //Falls Umwandlung fehlschlägt, gebe Fehler aus.
    std::cerr << "Second argument is no number: " << argv[2] << '\n';
    std::cout << "False arguments were entered. Please only enter one Converter and Value. Execute the Program again" << std::endl;
    exit(1); //Verlasse Programm
  }
  
  
  
//Einfach die Methode, die nicht benutzt werden soll auskommentieren.
  //Benutze FACTORYMEDTHOD-Design  
  auto createdFactory = ConverterFactory::instance(); 
  auto temp = createdFactory->create_method(conversion);
  double number = temp->convert(value);

  std::cout << "Converter is: " << temp->toString() << std::endl;
  std::cout << "Entered value: " << value << " has been converted to " << number << "." << std::endl;

  //Benutze PROTOTYPE-Design 
  /*
  UnitConverter* converter_ptr = createdFactory->create_proto(conversion);
  double calc_number = converter_ptr->convert(value);
  std::cout << "Method" << std::endl << "Converter is: " << converter_ptr->toString() << std::endl;
  std::cout << "Entered value: " << value << " has been converted to " << calc_number << "." << std::endl;
*/
  return 0;
}

