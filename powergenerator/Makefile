CXXFLAGS = -Wall -Wunused -Wcast-qual -Wconversion -Woverloaded-virtual  -Wextra -Werror --pedantic-error -finline-functions
CC = g++
OBJS = main.o powergenerator.o
EXECUTABLES = main

main: $(OBJS)
	$(CC) -o $@ $(OBJS)

.c.o:
	$(CC) -c $<

clean:
	rm -f $(EXECUTABLES) $(OBJS) 

