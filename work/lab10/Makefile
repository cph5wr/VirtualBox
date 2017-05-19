# Colin Harfst
# cph5wr
# 21 October 2016
# lab section 103

CXX=clang++
CXXFLAGS1=-o encoder -Wall -O2
CXXFLAGS2=-o decoder -Wall -O2
OFILES1=heap.o node.o huffmanenc.o
OFILES2=node.o huffmandec.o

.SUFFIXES: .o .cpp

all:	main1 main2

main1:	$(OFILES1)
	$(CXX) $(CXXFLAGS1) $(OFILES1)

main2:	$(OFILES2)
	$(CXX) $(CXXFLAGS2) $(OFILES2)

clean:
	-rm -f *.o *~
