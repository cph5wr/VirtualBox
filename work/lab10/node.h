// Colin Harfst
// cph5wr
// 19 November 2016
// lab section 103

#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node {
public:
  Node();
  Node(char c, int f);
  Node(char c, int f, Node* l, Node* r);
  ~Node();
  void setLeft(Node* l);
  void setRight(Node* r);
  bool hasLeft();
  bool hasRight();
  char getChar();
  int getFreq();
  Node* getLeft();
  Node* getRight();
  void print();
  Node* addToTree(char c, string bits);
  void traverseTree(int &x, string bits);
private:
  char chr;
  int freq;
  Node* left;
  Node* right;
};

#endif
