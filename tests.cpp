#include <memory>
#include "dollartoeuroconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "tinytest.h"
#include "tests.hpp"

//Tests Celsius->Fahrenheit 
//IMPLEMENT CelsiusToFahrenheitConverter then exchange 'DollarToEuroConverter' with 'CelsiusToFahrenheitConverter'
int firstCelsiusToFahrenheit () {
  auto myConverter = std::make_shared<CelsiusToFahrenheitConverter>();  
  double celsiusValue = 30.0;
  double fahrenheitValue = myConverter->convert(celsiusValue);
  TINYTEST_EQUAL_EPSILON(86.0, fahrenheitValue);
  return 1;
}
int secondCelsiusToFahrenheit () {
  auto myConverter = std::make_shared<CelsiusToFahrenheitConverter>();  
  double celsiusValue = 1000.0;
  double fahrenheitValue = myConverter->convert(celsiusValue);
  TINYTEST_EQUAL_EPSILON(1832.0, fahrenheitValue);
  return 1;
}
int thirdCelsiusToFahrenheit () {
  auto myConverter = std::make_shared<CelsiusToFahrenheitConverter>();  
  double celsiusValue = -530.0;
  double fahrenheitValue = myConverter->convert(celsiusValue);
  TINYTEST_EQUAL_EPSILON(-922.0, fahrenheitValue);
  return 1;
}

//Tests Celsius->Kelvin 
//IMPLEMENT CelsiusToKelvinConverter then exchange 'DollarToEuroConverter' with 'CelsiusToKelvinConverter'
int firstCelsiusToKelvin () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double celsiusValue = 30.0;
  double kelvinValue = myConverter->convert(celsiusValue);
  TINYTEST_EQUAL_EPSILON(303.15, kelvinValue);
  return 1;
}
int secondCelsiusToKelvin () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double celsiusValue = 1000.0;
  double kelvinValue = myConverter->convert(celsiusValue);
  TINYTEST_EQUAL_EPSILON(1273.15, kelvinValue);
  return 1;
}
int thirdCelsiusToKelvin () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double celsiusValue = -530.0;
  double kelvinValue = myConverter->convert(celsiusValue);
  TINYTEST_EQUAL_EPSILON(-256.85, kelvinValue);
  return 1;
}

//Tests Dollar->Euro 
int firstDollarToEuro () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double dollarValue = 10000.0;
  double euroValue = myConverter->convert(dollarValue);
  TINYTEST_EQUAL_EPSILON(8800.0, euroValue);
  return 1;
}
int secondDollarToEuro () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double dollarValue = 3000.0;
  double euroValue = myConverter->convert(dollarValue);
  TINYTEST_EQUAL_EPSILON(2640.0, euroValue);
  return 1;
}
int thirdDollarToEuro () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double dollarValue = 50.0;
  double euroValue = myConverter->convert(dollarValue);
  TINYTEST_EQUAL_EPSILON(44.0, euroValue);
  return 1;
}

//Tests Dollar->Pound  WERT: 0.64851 vom 2015-11-03 18:30 UTC
//IMPLEMENT DollarToPoundConverter then exchange 'DollarToEuroConverter' with 'DollarToPoundConverter'
int firstDollarToPound () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double dollarValue = 10000.0;
  double poundValue = myConverter->convert(dollarValue);
  TINYTEST_EQUAL_EPSILON(648.51, poundValue);
  return 1;
}
int secondDollarToPound () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double dollarValue = 3000.0;
  double poundValue = myConverter->convert(dollarValue);
  TINYTEST_EQUAL_EPSILON(1945.53, poundValue);
  return 1;
}
int thirdDollarToPound () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double dollarValue = 50.0;
  double poundValue = myConverter->convert(dollarValue);
  TINYTEST_EQUAL_EPSILON(32.4255, poundValue);
  return 1;
}

//Tests Metres->Miles 
//IMPLEMENT MetresToMilesConverter then exchange 'DollarToEuroConverter' with 'MetresToMilesConverter'
int firstMetresToMiles () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double metreValue = 1000.0;
  double mileValue = myConverter->convert(metreValue);
  TINYTEST_EQUAL_EPSILON(0.621371192237334, mileValue);
  return 1;
}
int secondMetresToMiles () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double metreValue = 1609344.0;
  double mileValue = myConverter->convert(metreValue);
  TINYTEST_EQUAL_EPSILON(1000.0, mileValue);
  return 1;
}
int thirdMetresToMiles () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double metreValue = 66.0;
  double mileValue = myConverter->convert(metreValue);
  TINYTEST_EQUAL_EPSILON(0.041010498687664, mileValue);
  return 1;
}

//Tests Metres->Feet 
//IMPLEMENT MetresToFeetConverter then exchange 'DollarToEuroConverter' with 'MetresToFeetConverter'
int firstMetresToFeet () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double metreValue = 1000.0;
  double footValue = myConverter->convert(metreValue);
  TINYTEST_EQUAL_EPSILON(3280.839895013123, footValue);
  return 1;
}
int secondMetresToFeet () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double metreValue = 1609344.0;
  double footValue = myConverter->convert(metreValue);
  TINYTEST_EQUAL_EPSILON(5280000.0, footValue);
  return 1;
}
int thirdMetresToFeet () {
  auto myConverter = std::make_shared<DollarToEuroConverter>();  
  double metreValue = 66.0;
  double footValue = myConverter->convert(metreValue);
  TINYTEST_EQUAL_EPSILON(216.5354330708661, footValue);
  return 1;
}



TINYTEST_START_SUITE(tests);
  TINYTEST_ADD_TEST(firstCelsiusToFahrenheit);
  TINYTEST_ADD_TEST(secondCelsiusToFahrenheit);
  TINYTEST_ADD_TEST(thirdCelsiusToFahrenheit);
  TINYTEST_ADD_TEST(firstCelsiusToKelvin);
  TINYTEST_ADD_TEST(secondCelsiusToKelvin);
  TINYTEST_ADD_TEST(thirdCelsiusToKelvin);
  TINYTEST_ADD_TEST(firstDollarToEuro);
  TINYTEST_ADD_TEST(secondDollarToEuro);
  TINYTEST_ADD_TEST(thirdDollarToEuro);
  TINYTEST_ADD_TEST(firstDollarToPound);
  TINYTEST_ADD_TEST(secondDollarToPound);
  TINYTEST_ADD_TEST(thirdDollarToPound);
  TINYTEST_ADD_TEST(firstMetresToMiles);
  TINYTEST_ADD_TEST(secondMetresToMiles);
  TINYTEST_ADD_TEST(thirdMetresToMiles);
  TINYTEST_ADD_TEST(firstMetresToFeet);
  TINYTEST_ADD_TEST(secondMetresToFeet);
  TINYTEST_ADD_TEST(thirdMetresToFeet);
TINYTEST_END_SUITE();;
TINYTEST_START_MAIN();
TINYTEST_RUN_SUITE(tests);
TINYTEST_END_MAIN();

