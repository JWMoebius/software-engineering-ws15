#include "unitconverter.hpp"

UnitConverter::UnitConverter() : m_base_{nullptr}
{}

UnitConverter::UnitConverter(UnitConverter* m_base) : m_base_{m_base}
{}
