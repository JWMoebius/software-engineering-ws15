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

//Abkürzung für  equalityTest
#define EXPECT_EQUAL(test, expect) equalityTest( test,  expect, \
                                                #test, #expect, \
                                                __FILE__, __LINE__)

template < typename T1, typename T2 >
int equalityTest(
    const T1    testValue,
    const T2    expectedValue,
    const char* testName,
    const char* expectedName,
    const char* fileName,
    const int   lineNumber
)
{
    if (testValue != expectedValue)
    {
        std::cerr << fileName << ":" << lineNumber << ": "
             << "Expected " << testName << " "
             << "to equal " << expectedName << " (" << expectedValue << ") "
             << "but it was (" << testValue << ")" << std::endl;

        return 1;
    }
    else
    {
        return 0;
    }
}

//Tests Celsius->Fahrenheit 
int main(int argc, char* argv[]) { //Have to use new main because tinytest uses it own main method
	int result = 0;
	auto myConverter = std::make_shared<CelsiusToFahrenheitConverter>();  
  auto myConverter_2 = std::make_shared<DollarToEuroConverter>();  
  double celsiusValue = 30.0;
  double dollarValue = 50.0;
  result |= EXPECT_EQUAL(myConverter->convert(celsiusValue), 86.0);
  result |= EXPECT_EQUAL(myConverter_2->convert(dollarValue), 44.0);
  std::cout << "WHAT!";
  return result;
}
