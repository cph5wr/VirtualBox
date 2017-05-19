/* Colin Harfst
cph5wr
19 November 2016
lab section 103 */

#ifndef HEAP_H
#define HEAP_H

#include <iostream>
#include "node.h"
#include <vector>
using namespace std;

class Heap {
public:
  Heap();
  //Heap(vector<Node*> vec);
  ~Heap();
  
  void insert(Node* n);
  int findMin();
  //int deleteMin();
  unsigned int size();
  //void makeEmpty();
  //bool isEmpty();
  //void print();
  
 private:
  vector<Node*> heap;
  unsigned int hsize;
  
  void percolateUp(int h);
  //void percolateDown(int h);
};

#endif
