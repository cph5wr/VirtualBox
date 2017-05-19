# Colin Harfst
# cph5wr
# 10/14/16
# lab 103

CXX=clang++ $(CXXFLAGS)
CXXFLAGS=-Wall -O2
OFILES=timer.o hashTable.o wordPuzzle.o

.SUFFIXES: .o .cpp

main:	$(OFILES)
	$(CXX) $(OFILES)

clean:
	-rm -f *.o *~

timer.o: timer.cpp timer.h
hashTable.o: hashTable.cpp hashTable.h
wordPuzzle.o: wordPuzzle.cpp hashTable.h timer.h
