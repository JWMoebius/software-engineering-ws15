#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>

class UnitConverter
{
  public:
    UnitConverter();
	UnitConverter(UnitConverter* m_base);
	
    virtual double convert(const double inValue) const = 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
	virtual UnitConverter* clone() const= 0;
  protected:
    UnitConverter* m_base_;
};

#endif // CONVERTER_H
