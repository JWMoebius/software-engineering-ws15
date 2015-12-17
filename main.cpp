#include <deque>
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
#include "inversionDecorator.hpp"
#include "command.hpp"

int main(int argc, char* argv[])
{
/*           //DURCH COMMAND PATTER SINNLOS GEWORDENER CODE
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
  
  
  */
//Einfach die Methode, die nicht benutzt werden soll auskommentieren.
  //Benutze FACTORYMEDTHOD-Design  
  auto createdFactory = ConverterFactory::instance(); 
 /* auto temp = createdFactory->create_method(conversion);  					// CODE VON DER ABGABE AM 3.12
  double number = temp->convert(value);                  

  std::cout << "Converter is: " << temp->toString() << std::endl;
  std::cout << "Entered value: " << value << " has been converted to " << number << "." << std::endl;
*/
  //Benutze PROTOTYPE-Design 
  /*
  UnitConverter* converter_ptr = createdFactory->create_proto(conversion);
  double calc_number = converter_ptr->convert(value);
  std::cout << "Method" << std::endl << "Converter is: " << converter_ptr->toString() << std::endl;
  std::cout << "Entered value: " << value << " has been converted to " << calc_number << "." << std::endl;
*/

// command quatsch
  std::cout << "Please input now commands:[Input No or N to stop the input of numbers!]" <<  std::endl 
    << "Follow this scheme \"ConversionsName\" Inputvalue as floating-point number." << std::endl;
  std::deque<Command> conversions;
  for (std::string line; std::getline(std::cin, line);) {
	bool input_block = false;
    std::stringstream converterStream(line);
    std::string converterName; double converterValue;
	converterStream >> converterName;  //Conversion Type 
	if (!(converterStream >> converterValue)){
	  input_block = true;
	  std::cout << " Please try to input a double number as the second argument type" << std::endl;
    }
	if (input_block  == false) {
	  double (UnitConverter::*ptr_action)(double) const = NULL; // To set pointer to convert method you have to initilize the pointer as NULL [at least according to http://www.newty.de/fpt/fpt.html#defi]
      ptr_action = &UnitConverter::convert;
      auto ptr_converter = createdFactory->create_method(converterName); //using Factory checks for existing Conversions
	  Command input_command(ptr_converter, ptr_action, converterValue);
	  conversions.push_back(input_command);
	}
	if ((converterName  == "No")||( converterName  == "NO") || (converterName  == "N") || (converterName  == "n") || (converterName  == "no")) {
	  break;
	}
	  std::cout << "Please input now commands:[Input No or N to stop the input of numbers!]" <<  std::endl 
    << "Follow this scheme \"ConversionsName\" Inputvalue as floating-point number." << std::endl;

  }
  for (auto it : conversions) {
    it.execute();
  }
  return 0;
}

