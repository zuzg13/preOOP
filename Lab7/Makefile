CXX = g++
EXEC = test
CXXFLAGS += -pedantic -Wall -MMD -MP -std=c++11
LIBS = -lm

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

$(EXEC): $(OBJ) 
	$(CXX) $(LFLAGS) $^ -o $@

.PHONY: clean

clean:
	@rm -f $(EXEC) $(OBJ) $(DEP)

-include $(DEP)

