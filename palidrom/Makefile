CXXFLAGS = -ggdb -O3 -Wall -Wunused -Woverloaded-virtual -Werror --pedantic-error -finline-functions
MAIN_OBJECTS += BigInteger.o palidrom.cpp

all:	palidrom

palidrom: $(MAIN_OBJECTS) 
	$(CXX) $(CXXFLAGS) $(MAIN_OBJECTS) -o palidrom $(LDFLAGS)

BigInteger.o: BigInteger.cpp BigInteger.h

palidrom.o: BigInteger.o palidrom.cpp 


.PHONY:	clean tar

tar:
	make clean && cd .. && tar cvf palidrom/palidrom.tar palidrom/* && gzip -9 palidrom/palidrom.tar 

clean:
	-/bin/rm -f $(OBJECTS) palidrom *.o palidrom.tar palidrom.tar.gz *~  \#* 2>/dev/null
