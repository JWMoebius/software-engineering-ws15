#include "currencyconverter.hpp"

CurrencyConverter::CurrencyConverter()
{}
CurrencyConverter::CurrencyConverter(UnitConverter* m_base)
  :  UnitConverter{m_base}
{}