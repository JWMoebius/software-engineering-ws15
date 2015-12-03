#files without tests.cpp
notests_files = $(filter-out tests.o, $(patsubst %.cpp,%.o,$(wildcard *.cpp)))
nomain_files = $(filter-out main.o, $(patsubst %.cpp,%.o,$(wildcard *.cpp)))
# minimal makefile for SE class
all: main compiletest test

# main depends on all cpp files
main: $(notests_files)
	$(info $$notests_files is [${notests_files}])
	g++ --std=c++11 -Wall -o $@ $^

# a slightly ugly hack to make .o depend on .hpp if it exists
.SECONDEXPANSION:
%.o: %.cpp $$(wildcard $$*.hpp)
	g++ --std=c++11 -Wall -c -o $@ $<

test:
	echo MAINTEST
	./main DollarToEuro 10000
	./main DollarToPound 10000
	./main CelsiusToFahrenheit 10000
	./main CelsiusToKelvin 10000
	./main KelvinToCelsius 0
	./main MetreToMile 10000
	./main MetreToFoot  10000
	./main teststest 10000
	./tests
	
compiletest: $(nomain_files)
	g++ --std=c++11 -Wall -o tests $^ 
	
clean:
	rm main *.o *.exe

