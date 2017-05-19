// Colin Harfst
// cph5wr
// 19 November 2016
// lab section 103

// Some of this code was taken from Bloomfield's github, but most things were
// modified to work as I needed.

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
  // Node* parent = heap[h/2];
  //int pfreq = parent->getFreq();
  for(; (h>1)&&(cfreq<(heap[h/2]->getFreq())); h/=2) {
    //pfreq=heap[h/2]->getFreq();
    heap[h]=heap[h/2];
    //cfreq=heap[h]->getFreq();
    //pfreq=heap[h/4]->getFreq();
  }
  heap[h]=child;
}

unsigned int Heap::size() {
  return hsize;
}


void Heap::makeEmpty() {
  hsize = 0;
}

bool Heap::isEmpty() {
  return hsize == 0;
}

Node* Heap::findMin() {
  if ( hsize == 0 )
    throw "findMin() called on empty heap";
  return heap[1];
}


Node* Heap::deleteMin() {
  if ( hsize == 0 )
    throw "deleteMin() called on empty heap";
  Node* n = heap[1];
  heap[1] = heap[hsize--];
  heap.pop_back();
  percolateDown(1);
  return n;
}

void Heap::percolateDown(int h) {
  Node* n = heap[h];
  while ( h*2 <= hsize ) {
    int child = h*2;
    if ( (child+1 <= hsize) && (heap[child+1]->getFreq() < heap[child]->getFreq()) )
      child++;
    if ( n->getFreq() > heap[child]->getFreq() ) {
      heap[h] = heap[child];
      h = child;
    } else
      break;
  }
  heap[h] = n;
}

void Heap::print() {
  for ( int i = 1; i <= hsize; i++ ) {
    heap[i]->print();
    cout << " ";
    // next line from from http://tinyurl.com/mf9tbgm
    bool isPow2 = (((i+1) & ~(i))==(i+1))? i+1 : 0;
    if ( isPow2 )
      cout << endl;
  }
}


void Heap::getBin(Node* n, string s) {
  if (!n->hasLeft() && !n->hasRight()) {
    char c = n->getChar();
    int i = (int) c;
    if (i==32)
      cout << "space " << s << endl;
    else
      cout << c << " " << s << endl;
    mp[c]=s;
  }
  else {
    string l = s+"0";
    string r = s+"1";
    getBin(n->getLeft(),l);
    getBin(n->getRight(),r);
  }
}
