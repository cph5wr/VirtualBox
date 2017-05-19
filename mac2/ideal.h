#include <iostream>
#include <vector>
using namespace std;

#ifndef IDEAL_H
#define IDEAL_H

class Ideal {
public :
  Ideal();
  void addGen(string s);
  void print();
  void makeEmpty();
private:
  vector<string> gens;
  int numOfGens;
};

#endif
