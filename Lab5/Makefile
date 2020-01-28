CXX = g++
EXEC = test
CXXFLAGS += -pedantic -Wall -MMD -MP -std=c++11
LIBS = -lm

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

$(EXEC): $(OBJ) 
	$(CXX) $(LFLAGS) $^ -o $@

.PHONY: clean check run

clean:
	@rm -f $(EXEC) $(OBJ) $(DEP)

check:
	@valgrind ./$(OUTPUT)

run:
	@./$(EXEC)


-include $(DEP)

