#ifndef INVERSION_DECORATOR_HPP 
#define INVERSION_DECORATOR_HPP
#include <cstdlib>
#include "unitconverter.hpp"
#include "converterDecorator.hpp"

class inversionDecorator : public converterDecorator{
  public:
    inversionDecorator(){}
    inversionDecorator(UnitConverter* m_base) : converterDecorator{m_base} {
	  if (m_base_ != nullptr) { 
	    std::string converterName = m_base_->toString();
	    if (converterName == "Celsius to Fahrenheit Converter" || 
	          converterName == "Celsius to Kelvin Converter" || 
			  converterName == "Kelvin to Celsius Converter") {
	      std::cout << "Cannot inverse converters from the type temperature converter." << std::endl;
		  exit(1);
	    }
	  }
	}
    double convert(const double inValue) const override  {
	  if (m_base_ == nullptr) {
	    std::cout << "Missing pointer at InversionDecorator" << std::endl;
		exit(1);
	  }
	  double temp = m_base_->convert(inValue);
	  return 1/temp;
	}	
	std::string toString() const override{
	  return m_base_->toString() + " mit Inversion";}
    virtual void print() const override{
      std::cout << toString();
	}
	virtual UnitConverter* clone() const override{
	  return new inversionDecorator;
}

	
};

#endif //INVERSION_DECORATOR_HPP