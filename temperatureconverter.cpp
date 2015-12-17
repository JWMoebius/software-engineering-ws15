#include "temperatureconverter.hpp"
 
TemperatureConverter::TemperatureConverter()
{}
TemperatureConverter::TemperatureConverter(UnitConverter* m_base)
  :  UnitConverter{m_base}
{}