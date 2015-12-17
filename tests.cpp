#include <memory>
#include "celsiustofahrenheitconverter.hpp"
#include "celsiustokelvinconverter.hpp"
#include "dollartoeuroconverter.hpp"
#include "dollartopoundconverter.hpp"
#include "kelvintocelsiusconverter.hpp"
#include "meterstomilesconverter.hpp"
#include "meterstofeetconverter.hpp"
#include "yardstometersconverter.hpp"
#include "inversionDecorator.hpp"
#include "tinytest.h"
#include "tests.hpp"

//Tests Celsius->Fahrenheit 
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
int firstCelsiusToKelvin () {
  auto myConverter = std::make_shared<CelsiusToKelvinConverter>();  
  double celsiusValue = 30.0;
  double kelvinValue = myConverter->convert(celsiusValue);
  TINYTEST_EQUAL_EPSILON(303.15, kelvinValue);
  return 1;
}
int secondCelsiusToKelvin () {
  auto myConverter = std::make_shared<CelsiusToKelvinConverter>();  
  double celsiusValue = 1000.0;
  double kelvinValue = myConverter->convert(celsiusValue);
  TINYTEST_EQUAL_EPSILON(1273.15, kelvinValue);
  return 1;
}
int thirdCelsiusToKelvin () {
  auto myConverter = std::make_shared<CelsiusToKelvinConverter>();  
  double celsiusValue = -273.15;
  double kelvinValue = myConverter->convert(celsiusValue);
  TINYTEST_EQUAL_EPSILON(0.0, kelvinValue);
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
int firstDollarToPound () {
  auto myConverter = std::make_shared<DollarToPoundConverter>();  
  double dollarValue = 10000.0;
  double poundValue = myConverter->convert(dollarValue);
  TINYTEST_EQUAL_EPSILON(6485.10, poundValue);
  return 1;
}
int secondDollarToPound () {
  auto myConverter = std::make_shared<DollarToPoundConverter>();  
  double dollarValue = 3000.0;
  double poundValue = myConverter->convert(dollarValue);
  TINYTEST_EQUAL_EPSILON(1945.53, poundValue);
  return 1;
}
int thirdDollarToPound () {
  auto myConverter = std::make_shared<DollarToPoundConverter>();  
  double dollarValue = 50.0;
  double poundValue = myConverter->convert(dollarValue);
  TINYTEST_EQUAL_EPSILON(32.4255, poundValue);
  return 1;
}
//Tests Kelvin->Celsius 
int firstKelvinToCelsius () {
  auto myConverter = std::make_shared<KelvinToCelsiusConverter>();  
  double kelvinValue = 303.15;
  double celsiusValue = myConverter->convert(kelvinValue);
  TINYTEST_EQUAL_EPSILON(30.0, celsiusValue);
  return 1;
}
int secondKelvinToCelsius () {
  auto myConverter = std::make_shared<KelvinToCelsiusConverter>();  
  double kelvinValue = 1273.15;
  double celsiusValue = myConverter->convert(kelvinValue);
  TINYTEST_EQUAL_EPSILON(1000.0, celsiusValue);
  return 1;
}
int thirdKelvinToCelsius () {
  auto myConverter = std::make_shared<KelvinToCelsiusConverter>();  
  double kelvinValue = 0;
  double celsiusValue = myConverter->convert(kelvinValue);
  TINYTEST_EQUAL_EPSILON(-273.15, celsiusValue);
  return 1;
}

//Tests Meters->Miles 
int firstmetersToMiles () {
  auto myConverter = std::make_shared<MetersToMilesConverter>();  
  double meterValue = 1000.0;
  double mileValue = myConverter->convert(meterValue);
  TINYTEST_EQUAL_EPSILON(0.621371192237334, mileValue);
  return 1;
}
int secondmetersToMiles () {
  auto myConverter = std::make_shared<MetersToMilesConverter>();  
  double meterValue = 1600.0;
  double mileValue = myConverter->convert(meterValue);
  TINYTEST_EQUAL_EPSILON(0.9941939075797344, mileValue);
  return 1;
}
int thirdmetersToMiles () {
  auto myConverter = std::make_shared<MetersToMilesConverter>();  
  double meterValue = 66.0;
  double mileValue = myConverter->convert(meterValue);
  TINYTEST_EQUAL_EPSILON(0.041010498687664, mileValue);
  return 1;
}

//Tests Meters->Feet 
int firstmetersToFeet () {
  auto myConverter = std::make_shared<MetersToFeetConverter>();  
  double meterValue = 1000.0;
  double footValue = myConverter->convert(meterValue);
  TINYTEST_EQUAL_EPSILON(3280.839895013123, footValue);
  return 1;
}
int secondmetersToFeet () {
  auto myConverter = std::make_shared<MetersToFeetConverter>();  
  double meterValue = 1609344.0;
  double footValue = myConverter->convert(meterValue);
  TINYTEST_EQUAL_EPSILON(5280000.0, footValue);
  return 1;
}
int thirdmetersToFeet () {
  auto myConverter = std::make_shared<MetersToFeetConverter>();  
  double meterValue = 66.0;
  double footValue = myConverter->convert(meterValue);
  TINYTEST_EQUAL_EPSILON(216.5354330708661, footValue);
  return 1;
}

int decoratorTest() {
  auto myConverter = new inversionDecorator(new YardsToMetersConverter() );
  double yardsValue = 1;
  double yardsAusgabe = myConverter->convert(yardsValue);
  TINYTEST_EQUAL_EPSILON(1.0, yardsAusgabe);
  return 1;
}


//TEST main via tinytest:
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
  TINYTEST_ADD_TEST(firstKelvinToCelsius);
  TINYTEST_ADD_TEST(secondKelvinToCelsius);
  TINYTEST_ADD_TEST(thirdKelvinToCelsius);
  TINYTEST_ADD_TEST(firstmetersToMiles);
  TINYTEST_ADD_TEST(secondmetersToMiles);
  TINYTEST_ADD_TEST(thirdmetersToMiles);
  TINYTEST_ADD_TEST(firstmetersToFeet);
  TINYTEST_ADD_TEST(secondmetersToFeet);
  TINYTEST_ADD_TEST(thirdmetersToFeet);
  TINYTEST_ADD_TEST(decoratorTest);
TINYTEST_END_SUITE();;
TINYTEST_START_MAIN();
TINYTEST_RUN_SUITE(tests);
TINYTEST_END_MAIN();

