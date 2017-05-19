// Colin Harfst
// cph5wr
// lab section 103
// 19 November 2016

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

Node::Node(char c, int f, Node* l, Node* r) {
  chr=c;
  freq=f;
  left=l;
  right=r;
}

Node::~Node() {
  delete left;
  delete right;
}

void Node::setLeft(Node* l) {
  left=l;
}

void Node::setRight(Node* r) {
  right=r;
}

bool Node::hasLeft() {
  if (left==NULL)
    return false;
  else
    return true;
}

bool Node::hasRight() {
  if (right==NULL)
    return false;
  else
    return true;
}

char Node::getChar() {
  return chr;
}

int Node::getFreq() {
  return freq;
}

Node* Node::getLeft() {
  return left;
}

Node* Node::getRight() {
  return right;
}

void Node::print() {
  cout << "(" << chr << "," << freq << ")";
}

Node* Node::addToTree(char c, string bits) {
  if(bits=="0") {
    Node* n = new Node(c,0);
    left=n;
    return this;
  }
  else if(bits=="1") {
    Node* n = new Node(c,0);
    right=n;
    return this;
  }
  else if(bits[0]=='0') {
    if(left==NULL) {
      Node* n = new Node();
      left=n;
      left->addToTree(c,bits.substr(1));
      return this;
    }
    else {
      left->addToTree(c,bits.substr(1));
      return this;
    }
  }
  else {
    if(right==NULL) {
      Node* n = new Node();
      right=n;
      right->addToTree(c,bits.substr(1));
      return this;
    }
    else {
      right->addToTree(c,bits.substr(1));
      return this;
    }
  }
}

void Node::traverseTree(int &x, string bits) {
  if((left==NULL)&&(right==NULL)) {
    cout << chr;
  }
  else if(bits[0]=='0') {
    x++;
    left->traverseTree(x,bits.substr(1));
  }
  else {
    x++;
    right->traverseTree(x,bits.substr(1));
  }
}
