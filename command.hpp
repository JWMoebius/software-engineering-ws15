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
		  (*m_converter.*m_method)(m_parameter);
          std::cout << "Convert " << m_parameter << " to " << (*m_converter.*m_method)(m_parameter) << std::endl;
		
		}

  private:
    std::shared_ptr<UnitConverter> m_converter;	
    Action m_method;
    double m_parameter;
};

#endif
