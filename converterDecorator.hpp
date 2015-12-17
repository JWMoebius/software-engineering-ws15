#ifndef CONVERTER_DECORATOR_HPP 
#define CONVERTER_DECORATOR_HPP
#include "unitconverter.hpp"

class converterDecorator : public UnitConverter{
  public:
    converterDecorator(UnitConverter* m_base) : m_base_{m_base} {};
    virtual double convert(const double inValue) const {
	  return m_base_->convert(inValue); // aequivalent zu "http://www.vincehuston.org/dp/decorator.html"
	}
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
	virtual UnitConverter* clone() const= 0;
  protected:
    UnitConverter* m_base_;
	
};

#endif //CONVERTER_DECORATOR_HPP