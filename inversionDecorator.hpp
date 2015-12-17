#ifndef INVERSION_DECORATOR_HPP 
#define INVERSION_DECORATOR_HPP
#include "unitconverter.hpp"
#include "converterDecorator.hpp"

class inversionDecorator : public converterDecorator{
  public:
    inversionDecorator(UnitConverter* m_base) : converterDecorator(m_base) {}
    double convert(const double inValue) {return 0;}
	std::string toString() {
	  return m_base_->toString() + " mit Inversion";}
    virtual void print() {
      std::cout << toString();
	}
	virtual UnitConverter* clone() const= 0;

	
};

#endif //INVERSION_DECORATOR_HPP