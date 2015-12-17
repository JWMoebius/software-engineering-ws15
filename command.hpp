#ifndef COMMANDPATTERN_H
#define COMMANDPATTERN_H

#include "unitconverter.hpp"
#include <memory>

typedef double(UnitConverter::*Action)(double) const;


class Command {
  public:
    Command(std::shared_ptr<UnitConverter> converter, Action action, double arg):
		   m_converter{converter}, m_method{action}, m_parameter{arg} {}
    void execute() 
		{  
		  double result = (*m_converter.*m_method)(m_parameter);
          std::cout << "You converted " << m_parameter << " to the value " << result << "." << std::endl;
		
		}

  private:
    std::shared_ptr<UnitConverter> m_converter;	
    Action m_method;
    double m_parameter;
};

#endif
