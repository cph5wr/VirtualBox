/* Colin Harfst
cph5wr
19 November 2016
lab section 103 */

#include <iostream>
#include "node.h"
#include "heap.h"
using namespace std;

Heap::Heap() : hsize(0) {
  Node* n = new Node(); 
  heap.push_back(n);
}

Heap::~Heap() {
}

void Heap::insert(Node* n) {
  heap.push_back(n);
  hsize++;
  percolateUp(hsize);
}

void Heap::percolateUp(int h) {
  Node* child = heap[h];
  int cfreq = child->getFreq();
  Node* parent = heap[h/2];
  int pfreq = parent->getFreq();
  for(; (h>1)&&(cfreq<pfreq); h/=2)
    heap[h]=heap[h/2];
  heap[h]=child;
}

unsigned int Heap::size() {
  return hsize;
}

int Heap::findMin() {
}

int main() {
  Node* n = new Node('c',5);
  int i = n->getFreq();
  char c = n->getChar();
  cout << i << endl;
  cout << c << endl;

  Heap h;
  h.insert(n);
  int s = h.size();
  cout << s << endl;
}
