cmake_minimum_required (VERSION 2.8)
project (Converter)
set(CMAKE_CXX_FLAGS "-std=c++0x")
enable_testing()

add_executable(main 
lengthconverter.cpp
celsiustofahrenheitconverter.cpp 
main.cpp 
celsiustokelvinconverter.cpp 
meterstofeetconverter.cpp 
meterstomilesconverter.cpp 
converterDecorator.cpp 
temperatureconverter.cpp 
currencyconverter.cpp 
dollartoeuroconverter.cpp 
dollartopoundconverter.cpp 
unitconverter.cpp 
kelvintocelsiusconverter.cpp 
yardstometersconverter.cpp )
add_executable(tests 
lengthconverter.cpp
celsiustofahrenheitconverter.cpp 
celsiustokelvinconverter.cpp 
meterstofeetconverter.cpp 
meterstomilesconverter.cpp 
converterDecorator.cpp 
temperatureconverter.cpp 
currencyconverter.cpp 
tests.cpp 
dollartoeuroconverter.cpp 
dollartopoundconverter.cpp 
unitconverter.cpp 
kelvintocelsiusconverter.cpp 
yardstometersconverter.cpp )
add_executable(cmake_test 
lengthconverter.cpp
celsiustofahrenheitconverter.cpp 
celsiustokelvinconverter.cpp 
meterstofeetconverter.cpp 
meterstomilesconverter.cpp 
converterDecorator.cpp 
temperatureconverter.cpp 
currencyconverter.cpp 
cmake_test.cpp 
dollartoeuroconverter.cpp 
dollartopoundconverter.cpp 
unitconverter.cpp 
kelvintocelsiusconverter.cpp 
yardstometersconverter.cpp )
add_test(../Teste_tests cmake_test)
