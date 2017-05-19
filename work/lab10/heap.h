// Colin Harfst
// cph5wr
// 19 November 2016
// lab section 103

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include "node.h"
#include <vector>
#include <map>
using namespace std;

class Heap {
public:
  Heap();
  ~Heap();
  void insert(Node* n);
  unsigned int size();
  void makeEmpty();
  bool isEmpty();
  Node* findMin();
  Node* deleteMin();
  void print();
  void getBin(Node* n, string s);

  map<char,string> mp;
  
 private:
  vector<Node*> heap;
  unsigned int hsize;
  
  void percolateUp(int h);
  void percolateDown(int h);
};

#endif
