#ifndef CONVERTER_DECORATOR_HPP 
#define CONVERTER_DECORATOR_HPP
#include "unitconverter.hpp"

class converterDecorator : public UnitConverter{
  public:
    virtual double convert(const double inValue) const = 0 ;
	  // aequivalent zu "http://www.vincehuston.org/dp/decorator.html
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
	virtual UnitConverter* clone() const= 0;
  protected:
    converterDecorator(){};
	converterDecorator(UnitConverter* m_base) : UnitConverter{m_base} {};
	
};

#endif //CONVERTER_DECORATOR_HPP