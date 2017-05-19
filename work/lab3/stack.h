// Colin Harfst
// 9/12/16
// stack.h

#ifndef STACK_H
#define STACK_H

#include <iostream>
#include "List.h"
using namespace std;


class Stack {
 public:
  Stack();
  ~Stack();
  void push(int x);
  int top();
  void pop();
  bool empty();

 private:
  List lst;
  // This class is listed as a friend class in List.h and ListNode.h.
};

#endif
