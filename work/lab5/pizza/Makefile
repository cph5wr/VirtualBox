# Colin Harfst
# cph5wr
# 10/2/16
# Section 103

CXX=clang++ $(CXXFLAGS)
CXXFLAGS=-Wall -O2
OFILES=pizza.o pizzadough.o tomatosauce.o toppings.o mushrooms.o peppers.o cheese.o pepperoni.o
DEBUG=-g

.SUFFIXES: .o .cpp

pizza: $(OFILES)
	$(CXX) $(DEBUG) $(OFILES) -o pizza
	@echo "Pizza is Hot and Ready!"

clean:
	-rm -f *.o *.~ pizza

cheese.o: cheese.cpp cheese.h
mushrooms.o: mushrooms.cpp mushrooms.h
pepperoni.o: pepperoni.cpp pepperoni.h
peppers.o: peppers.cpp peppers.h
pizza.o: pizza.cpp pizzadough.h tomatosauce.h toppings.h cheese.h mushrooms.h peppers.h pepperoni.h
pizzadough.o: pizzadough.cpp pizzadough.h
tomatosauce.o: tomatosauce.cpp tomatosauce.h
toppings.o: toppings.cpp toppings.h cheese.h mushrooms.h peppers.h pepperoni.h
