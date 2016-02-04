#ifndef INPUT_ERROR_HPP
#define INPUT_ERROR_HPP
#include <sstream>

class input_error : public std::exception
{
  public:
  virtual const char* what(double value ) const throw()
  {
  std::stringstream temp;
  temp << "Input value " << value <<  " defies the chosen conversion. ";
  std::string s_temp = temp.str();
  char const* c_temp = s_temp.c_str(); 
  return c_temp;
  }
};

#endif // INPUT_ERROR_HPP
