// Colin Harfst
// cph5wr
// 21 November 2016
// lab section 103

#include <iostream>
#include "heap.h"
#include "node.h"
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <map>
using namespace std;

int main(int argc, char** argv) {
  if (argc != 2) {
    cout << "Must supply the input file name as the one and only parameter" << endl;
    exit(1);
  }
  FILE *fp = fopen(argv[1], "r");
  if ( fp == NULL ) {
    cout << "File '" << argv[1] << "' does not exist!" << endl;
    exit(2);
  }
  char g;
  vector<int> vec(128,0);
  while ((g=fgetc(fp))!=EOF) {
    int ind = (int) g;
    vec[ind]++;
  }
  rewind(fp);
  Heap h;
  for (int i=32; i<127; i++) {
    if (vec[i]!=0) {
      char chr = (char) i;
      Node* n = new Node(chr,vec[i]);
      h.insert(n);
    }
  }
  while (h.size()>1) {
    Node* j = h.deleteMin();
    int js = j->getFreq();
    Node* k = h.deleteMin();
    int ks = k->getFreq();
    Node* cmb = new Node('-', js+ks, j, k);
    h.insert(cmb);
  }
  h.getBin(h.findMin(),"");
  cout << "----------------------------------------" << endl;
  int x = 0;
  int y = 0;
  while ((g=fgetc(fp))!=EOF) {
    string s = h.mp[g];
    cout << s << " ";
    x++;
    y+=s.length();
  }
  cout << endl << "----------------------------------------" << endl;
  x *= 8;
  double ratio = ((double) x)/y;
  cout << "Compression ration: " << ratio << endl;
  double cost = ((double) y)/(x/8);
  cout << "Huffman tree cost: " << cost << endl;
}
