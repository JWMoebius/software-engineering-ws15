#ifndef NO_CONVERTER_HPP
#define NO_CONVERTER_HPP
#include <sstream>

class no_converter_error : public std::exception
{
  public:
  virtual const char* what(std::string value ) const throw()
  {
  std::stringstream temp;
  temp << "Couldn't find converter: " <<  value <<  " "<< std::endl;
  std::string s_temp = temp.str();
  char const* c_temp = s_temp.c_str(); 
  return c_temp;
  }
};

#endif // NO_CONVERTER_HPP
