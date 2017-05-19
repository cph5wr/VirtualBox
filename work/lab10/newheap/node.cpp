/* Colin Harfst
cph5wr
lab section 103
19 November 2016 */

#include <iostream>
#include "node.h"
using namespace std;

Node::Node() {
  chr='?';
  freq=0;
  left=NULL;
  right=NULL;
}
Node::Node(char c, int f) {
  chr=c;
  freq=f;
  left=NULL;
  right=NULL;
}
Node::~Node() {
  delete left;
  delete right;
}
char Node::getChar() {
  return chr;
}
int Node::getFreq() {
  return freq;
}
