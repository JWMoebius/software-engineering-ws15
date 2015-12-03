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
  std::string conversion = argv[1];
  std::string string_value = argv[2];
  std::stringstream passed_double(string_value);
  double value = 0.0;
  passed_double >> value;
  
  auto createdFactory = ConverterFactory::instance();
  createdFactory->test();
   
  auto temp = createdFactory->create(conversion);
  std::shared_ptr<UnitConverter> t = temp;

  double number = t->convert(value);

  std::cout << "Converter is: " << t->toString() << std::endl;
  std::cout << "Entered value: " << value << " has been converted to " << number << "." << std::endl;


  return 0;
}

