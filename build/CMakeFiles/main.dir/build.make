# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aver/Documents/software-engineering-ws15

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aver/Documents/software-engineering-ws15/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/lengthconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/lengthconverter.cpp.o: ../lengthconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/lengthconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/lengthconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/lengthconverter.cpp

CMakeFiles/main.dir/lengthconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/lengthconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/lengthconverter.cpp > CMakeFiles/main.dir/lengthconverter.cpp.i

CMakeFiles/main.dir/lengthconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/lengthconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/lengthconverter.cpp -o CMakeFiles/main.dir/lengthconverter.cpp.s

CMakeFiles/main.dir/lengthconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/lengthconverter.cpp.o.requires

CMakeFiles/main.dir/lengthconverter.cpp.o.provides: CMakeFiles/main.dir/lengthconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/lengthconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/lengthconverter.cpp.o.provides

CMakeFiles/main.dir/lengthconverter.cpp.o.provides.build: CMakeFiles/main.dir/lengthconverter.cpp.o

CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o: ../celsiustofahrenheitconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/celsiustofahrenheitconverter.cpp

CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/celsiustofahrenheitconverter.cpp > CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.i

CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/celsiustofahrenheitconverter.cpp -o CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.s

CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o.requires

CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o.provides: CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o.provides

CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o.provides.build: CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o

CMakeFiles/main.dir/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/main.cpp.o -c /home/aver/Documents/software-engineering-ws15/main.cpp

CMakeFiles/main.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/main.cpp > CMakeFiles/main.dir/main.cpp.i

CMakeFiles/main.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/main.cpp -o CMakeFiles/main.dir/main.cpp.s

CMakeFiles/main.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/main.cpp.o.requires

CMakeFiles/main.dir/main.cpp.o.provides: CMakeFiles/main.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/main.cpp.o.provides

CMakeFiles/main.dir/main.cpp.o.provides.build: CMakeFiles/main.dir/main.cpp.o

CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o: ../celsiustokelvinconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/celsiustokelvinconverter.cpp

CMakeFiles/main.dir/celsiustokelvinconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/celsiustokelvinconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/celsiustokelvinconverter.cpp > CMakeFiles/main.dir/celsiustokelvinconverter.cpp.i

CMakeFiles/main.dir/celsiustokelvinconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/celsiustokelvinconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/celsiustokelvinconverter.cpp -o CMakeFiles/main.dir/celsiustokelvinconverter.cpp.s

CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o.requires

CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o.provides: CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o.provides

CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o.provides.build: CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o

CMakeFiles/main.dir/meterstofeetconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/meterstofeetconverter.cpp.o: ../meterstofeetconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/meterstofeetconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/meterstofeetconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/meterstofeetconverter.cpp

CMakeFiles/main.dir/meterstofeetconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/meterstofeetconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/meterstofeetconverter.cpp > CMakeFiles/main.dir/meterstofeetconverter.cpp.i

CMakeFiles/main.dir/meterstofeetconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/meterstofeetconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/meterstofeetconverter.cpp -o CMakeFiles/main.dir/meterstofeetconverter.cpp.s

CMakeFiles/main.dir/meterstofeetconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/meterstofeetconverter.cpp.o.requires

CMakeFiles/main.dir/meterstofeetconverter.cpp.o.provides: CMakeFiles/main.dir/meterstofeetconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/meterstofeetconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/meterstofeetconverter.cpp.o.provides

CMakeFiles/main.dir/meterstofeetconverter.cpp.o.provides.build: CMakeFiles/main.dir/meterstofeetconverter.cpp.o

CMakeFiles/main.dir/meterstomilesconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/meterstomilesconverter.cpp.o: ../meterstomilesconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/meterstomilesconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/meterstomilesconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/meterstomilesconverter.cpp

CMakeFiles/main.dir/meterstomilesconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/meterstomilesconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/meterstomilesconverter.cpp > CMakeFiles/main.dir/meterstomilesconverter.cpp.i

CMakeFiles/main.dir/meterstomilesconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/meterstomilesconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/meterstomilesconverter.cpp -o CMakeFiles/main.dir/meterstomilesconverter.cpp.s

CMakeFiles/main.dir/meterstomilesconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/meterstomilesconverter.cpp.o.requires

CMakeFiles/main.dir/meterstomilesconverter.cpp.o.provides: CMakeFiles/main.dir/meterstomilesconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/meterstomilesconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/meterstomilesconverter.cpp.o.provides

CMakeFiles/main.dir/meterstomilesconverter.cpp.o.provides.build: CMakeFiles/main.dir/meterstomilesconverter.cpp.o

CMakeFiles/main.dir/converterDecorator.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/converterDecorator.cpp.o: ../converterDecorator.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/converterDecorator.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/converterDecorator.cpp.o -c /home/aver/Documents/software-engineering-ws15/converterDecorator.cpp

CMakeFiles/main.dir/converterDecorator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/converterDecorator.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/converterDecorator.cpp > CMakeFiles/main.dir/converterDecorator.cpp.i

CMakeFiles/main.dir/converterDecorator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/converterDecorator.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/converterDecorator.cpp -o CMakeFiles/main.dir/converterDecorator.cpp.s

CMakeFiles/main.dir/converterDecorator.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/converterDecorator.cpp.o.requires

CMakeFiles/main.dir/converterDecorator.cpp.o.provides: CMakeFiles/main.dir/converterDecorator.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/converterDecorator.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/converterDecorator.cpp.o.provides

CMakeFiles/main.dir/converterDecorator.cpp.o.provides.build: CMakeFiles/main.dir/converterDecorator.cpp.o

CMakeFiles/main.dir/temperatureconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/temperatureconverter.cpp.o: ../temperatureconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/temperatureconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/temperatureconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/temperatureconverter.cpp

CMakeFiles/main.dir/temperatureconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/temperatureconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/temperatureconverter.cpp > CMakeFiles/main.dir/temperatureconverter.cpp.i

CMakeFiles/main.dir/temperatureconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/temperatureconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/temperatureconverter.cpp -o CMakeFiles/main.dir/temperatureconverter.cpp.s

CMakeFiles/main.dir/temperatureconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/temperatureconverter.cpp.o.requires

CMakeFiles/main.dir/temperatureconverter.cpp.o.provides: CMakeFiles/main.dir/temperatureconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/temperatureconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/temperatureconverter.cpp.o.provides

CMakeFiles/main.dir/temperatureconverter.cpp.o.provides.build: CMakeFiles/main.dir/temperatureconverter.cpp.o

CMakeFiles/main.dir/currencyconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/currencyconverter.cpp.o: ../currencyconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/currencyconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/currencyconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/currencyconverter.cpp

CMakeFiles/main.dir/currencyconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/currencyconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/currencyconverter.cpp > CMakeFiles/main.dir/currencyconverter.cpp.i

CMakeFiles/main.dir/currencyconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/currencyconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/currencyconverter.cpp -o CMakeFiles/main.dir/currencyconverter.cpp.s

CMakeFiles/main.dir/currencyconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/currencyconverter.cpp.o.requires

CMakeFiles/main.dir/currencyconverter.cpp.o.provides: CMakeFiles/main.dir/currencyconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/currencyconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/currencyconverter.cpp.o.provides

CMakeFiles/main.dir/currencyconverter.cpp.o.provides.build: CMakeFiles/main.dir/currencyconverter.cpp.o

CMakeFiles/main.dir/dollartoeuroconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/dollartoeuroconverter.cpp.o: ../dollartoeuroconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/dollartoeuroconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/dollartoeuroconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/dollartoeuroconverter.cpp

CMakeFiles/main.dir/dollartoeuroconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/dollartoeuroconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/dollartoeuroconverter.cpp > CMakeFiles/main.dir/dollartoeuroconverter.cpp.i

CMakeFiles/main.dir/dollartoeuroconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/dollartoeuroconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/dollartoeuroconverter.cpp -o CMakeFiles/main.dir/dollartoeuroconverter.cpp.s

CMakeFiles/main.dir/dollartoeuroconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/dollartoeuroconverter.cpp.o.requires

CMakeFiles/main.dir/dollartoeuroconverter.cpp.o.provides: CMakeFiles/main.dir/dollartoeuroconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/dollartoeuroconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/dollartoeuroconverter.cpp.o.provides

CMakeFiles/main.dir/dollartoeuroconverter.cpp.o.provides.build: CMakeFiles/main.dir/dollartoeuroconverter.cpp.o

CMakeFiles/main.dir/dollartopoundconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/dollartopoundconverter.cpp.o: ../dollartopoundconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/dollartopoundconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/dollartopoundconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/dollartopoundconverter.cpp

CMakeFiles/main.dir/dollartopoundconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/dollartopoundconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/dollartopoundconverter.cpp > CMakeFiles/main.dir/dollartopoundconverter.cpp.i

CMakeFiles/main.dir/dollartopoundconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/dollartopoundconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/dollartopoundconverter.cpp -o CMakeFiles/main.dir/dollartopoundconverter.cpp.s

CMakeFiles/main.dir/dollartopoundconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/dollartopoundconverter.cpp.o.requires

CMakeFiles/main.dir/dollartopoundconverter.cpp.o.provides: CMakeFiles/main.dir/dollartopoundconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/dollartopoundconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/dollartopoundconverter.cpp.o.provides

CMakeFiles/main.dir/dollartopoundconverter.cpp.o.provides.build: CMakeFiles/main.dir/dollartopoundconverter.cpp.o

CMakeFiles/main.dir/unitconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/unitconverter.cpp.o: ../unitconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/unitconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/unitconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/unitconverter.cpp

CMakeFiles/main.dir/unitconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/unitconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/unitconverter.cpp > CMakeFiles/main.dir/unitconverter.cpp.i

CMakeFiles/main.dir/unitconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/unitconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/unitconverter.cpp -o CMakeFiles/main.dir/unitconverter.cpp.s

CMakeFiles/main.dir/unitconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/unitconverter.cpp.o.requires

CMakeFiles/main.dir/unitconverter.cpp.o.provides: CMakeFiles/main.dir/unitconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/unitconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/unitconverter.cpp.o.provides

CMakeFiles/main.dir/unitconverter.cpp.o.provides.build: CMakeFiles/main.dir/unitconverter.cpp.o

CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o: ../kelvintocelsiusconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/kelvintocelsiusconverter.cpp

CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/kelvintocelsiusconverter.cpp > CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.i

CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/kelvintocelsiusconverter.cpp -o CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.s

CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o.requires

CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o.provides: CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o.provides

CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o.provides.build: CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o

CMakeFiles/main.dir/yardstometersconverter.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/yardstometersconverter.cpp.o: ../yardstometersconverter.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/aver/Documents/software-engineering-ws15/build/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/main.dir/yardstometersconverter.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/main.dir/yardstometersconverter.cpp.o -c /home/aver/Documents/software-engineering-ws15/yardstometersconverter.cpp

CMakeFiles/main.dir/yardstometersconverter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/yardstometersconverter.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/aver/Documents/software-engineering-ws15/yardstometersconverter.cpp > CMakeFiles/main.dir/yardstometersconverter.cpp.i

CMakeFiles/main.dir/yardstometersconverter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/yardstometersconverter.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/aver/Documents/software-engineering-ws15/yardstometersconverter.cpp -o CMakeFiles/main.dir/yardstometersconverter.cpp.s

CMakeFiles/main.dir/yardstometersconverter.cpp.o.requires:
.PHONY : CMakeFiles/main.dir/yardstometersconverter.cpp.o.requires

CMakeFiles/main.dir/yardstometersconverter.cpp.o.provides: CMakeFiles/main.dir/yardstometersconverter.cpp.o.requires
	$(MAKE) -f CMakeFiles/main.dir/build.make CMakeFiles/main.dir/yardstometersconverter.cpp.o.provides.build
.PHONY : CMakeFiles/main.dir/yardstometersconverter.cpp.o.provides

CMakeFiles/main.dir/yardstometersconverter.cpp.o.provides.build: CMakeFiles/main.dir/yardstometersconverter.cpp.o

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/lengthconverter.cpp.o" \
"CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o" \
"CMakeFiles/main.dir/main.cpp.o" \
"CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o" \
"CMakeFiles/main.dir/meterstofeetconverter.cpp.o" \
"CMakeFiles/main.dir/meterstomilesconverter.cpp.o" \
"CMakeFiles/main.dir/converterDecorator.cpp.o" \
"CMakeFiles/main.dir/temperatureconverter.cpp.o" \
"CMakeFiles/main.dir/currencyconverter.cpp.o" \
"CMakeFiles/main.dir/dollartoeuroconverter.cpp.o" \
"CMakeFiles/main.dir/dollartopoundconverter.cpp.o" \
"CMakeFiles/main.dir/unitconverter.cpp.o" \
"CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o" \
"CMakeFiles/main.dir/yardstometersconverter.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/lengthconverter.cpp.o
main: CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o
main: CMakeFiles/main.dir/main.cpp.o
main: CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o
main: CMakeFiles/main.dir/meterstofeetconverter.cpp.o
main: CMakeFiles/main.dir/meterstomilesconverter.cpp.o
main: CMakeFiles/main.dir/converterDecorator.cpp.o
main: CMakeFiles/main.dir/temperatureconverter.cpp.o
main: CMakeFiles/main.dir/currencyconverter.cpp.o
main: CMakeFiles/main.dir/dollartoeuroconverter.cpp.o
main: CMakeFiles/main.dir/dollartopoundconverter.cpp.o
main: CMakeFiles/main.dir/unitconverter.cpp.o
main: CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o
main: CMakeFiles/main.dir/yardstometersconverter.cpp.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/requires: CMakeFiles/main.dir/lengthconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/celsiustofahrenheitconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/main.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/celsiustokelvinconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/meterstofeetconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/meterstomilesconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/converterDecorator.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/temperatureconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/currencyconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/dollartoeuroconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/dollartopoundconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/unitconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/kelvintocelsiusconverter.cpp.o.requires
CMakeFiles/main.dir/requires: CMakeFiles/main.dir/yardstometersconverter.cpp.o.requires
.PHONY : CMakeFiles/main.dir/requires

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/aver/Documents/software-engineering-ws15/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aver/Documents/software-engineering-ws15 /home/aver/Documents/software-engineering-ws15 /home/aver/Documents/software-engineering-ws15/build /home/aver/Documents/software-engineering-ws15/build /home/aver/Documents/software-engineering-ws15/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

