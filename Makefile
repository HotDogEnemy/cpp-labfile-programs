# Directory to compile the files to
BUILDDIR = ./build

# Source files
SOURCES := $(wildcard *.cpp)

# Take SOURCES, and substitue the name with BUILDDIR/name and strip extension
TARGETS := $(SOURCES:%.cpp=$(BUILDDIR)/%)

# Compiler info
CXX = g++
CXXFLAGS += -Wall -pedantic
SPL_CXXFLAGS += -std=c++11

.PHONY: all clean

# Build all targets
all: directories $(TARGETS)

directories: ${BUILDDIR}

${BUILDDIR}:
	mkdir -p ${BUILDDIR}

# Buil Q61.cpp with std=c++11 for exception specification
$(BUILDDIR)/q61: q61.cpp
	$(CXX) $(CXXFLAGS) $(SPL_CXXFLAGS) -c -o $@ $<

$(BUILDDIR)/%: %.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

# Delete compiled files
clean:
	rm -rf $(TARGETS)
	rmdir $(BUILDDIR)
