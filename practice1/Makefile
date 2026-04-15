CXX = g++
CXXFLAGS = -std=c++11 -Wall -Wextra

all: main

main: main.cpp swap.cpp
	$(CXX) $(CXXFLAGS) main.cpp swap.cpp -o main

clean:
	rm -f main

.PHONY: all clean