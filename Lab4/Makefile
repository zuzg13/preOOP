CC     = g++
CFLAGS = -Wall -ansi -pedantic
LFLAGS = -lm
OBJS   = lab04.o FunList.o 
EXEC   = main

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(LFLAGS) $+ -o $@
	echo main: zbudowane!

%.o: %.cpp
	$(CC) -c $(CFLAGS) $<

lab04.o : Functions.h
FunList.o: Functions.h


clean:
	rm -f *~
	rm -f *.bak
	rm -f $(EXEC) $(OBJS)
run:
	@./$(EXEC)

check:
	@valgrind ./$(OUTPUT)


.PHONY: clean run check
