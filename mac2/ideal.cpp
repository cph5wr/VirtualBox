#include <iostream>
#include <vector>
#include "ideal.h"
using namespace std;

Ideal::Ideal() {
  vector<string> gens;
  numOfGens=0;
}

void Ideal::addGen(string s) {
  gens.push_back(s);
  numOfGens++;
}

void Ideal::print() {
  cout << "ideal (";
  for (int i; i<numOfGens; i++) {
    if (i==numOfGens-1)
      cout << gens[i];
    else
      cout << gens[i] << ", ";
  }
  cout << ")" << endl;
}

void Ideal::makeEmpty() {
  gens.clear();
  numOfGens=0;
}
