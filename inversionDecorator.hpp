#ifndef INVERSION_DECORATOR_HPP 
#define INVERSION_DECORATOR_HPP
#include "unitconverter.hpp"
#include "converterDecorator.hpp"

class inversionDecorator : public converterDecorator{
  public:
    inversionDecorator(UnitConverter* m_base) : converterDecorator{m_base} {}
    double convert(const double inValue) const override  {
	  double temp = m_base_->convert(inValue);
	  return 1/temp;
	}	
	std::string toString() const{
	  return m_base_->toString() + " mit Inversion";}
    virtual void print() const{
      std::cout << toString();
	}
	virtual UnitConverter* clone() const {
	  return new MetersToMilesConverter;
}

	
};

#endif //INVERSION_DECORATOR_HPP