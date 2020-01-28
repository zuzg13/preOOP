CXX = g++
EXEC = lab09
CXXFLAGS +=  -pedantic -Wall -std=c++14
LIBS = -lm

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

$(EXEC): $(OBJ) 
	$(CXX) $(FLAGS) $^ -o $@

.PHONY: clean run check

clean:
	@rm -f $(EXEC) $(OBJ) $(DEP)
run:
	@./$(EXEC)
check:
	@valgrind ./$(EXEC)

-include $(DEP)
