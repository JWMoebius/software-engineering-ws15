#ifndef HIGH_INPUT
#define HIGH_INPUT
#include <sstream>

class high_input_error : public std::exception
{
  public:
  virtual const char* what() const throw()
  {
  std::stringstream temp;
  temp << "The entered value exceeded the limit of the max-type: double.";
  std::string s_temp = temp.str();
  char const* c_temp = s_temp.c_str(); 
  return c_temp;
  }
};

#endif // HIGH_INPUT_HPP
