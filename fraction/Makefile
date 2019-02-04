CXXFLAGS = -ggdb -O3 -Wall -Wunused -Woverloaded-virtual -Werror --pedantic-error -finline-functions
MAIN_OBJECTS += main.o fraction.o

all:	fraction

fraction: $(MAIN_OBJECTS) 
	$(CXX) $(CXXFLAGS) $(MAIN_OBJECTS) -o fraction $(LDFLAGS)

fraction.o: fraction.cpp fraction.h

main.o: main.cpp fraction.o


.PHONY:	clean tar

tar:
	make clean && cd .. && tar cvf fraction/fraction.tar fraction/* && gzip -9 fraction/fraction.tar 

clean:
	-/bin/rm -f $(OBJECTS) fraction *.o fraction.tar fraction.tar.gz *~  \#* 2>/dev/null
