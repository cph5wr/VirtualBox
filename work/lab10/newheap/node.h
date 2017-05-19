/* Colin Harfst
cph5wr
19 November 2016
lab section 103 */

#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
public:
  Node();
  Node(char c, int f);
  ~Node();
  char getChar();
  int getFreq();
  void prnt();
private:
  char chr;
  int freq;
  Node* left;
  Node* right;
};

#endif
