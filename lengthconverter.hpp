#ifndef LENGTH_CONVERTER_HPP
#define LENGTH_CONVERTER_HPP

#include "unitconverter.hpp"

class LengthConverter : public UnitConverter
{
  public:
    LengthConverter();
	LengthConverter(UnitConverter* m_base);

    virtual double convert(const double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
	virtual UnitConverter* clone() const= 0;
};

#endif // LENGTH_CONVERTER_HPP
