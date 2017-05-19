// Colin Harfst
// 9/11/16
// postfixCalculator.h

#ifndef CALC_H
#define CALC_H

#include <iostream>
#include "stack.h"
#include <cstdlib>
using namespace std;

class postfixCalculator {
 public:
  postfixCalculator();
  ~postfixCalculator();
  
  void push(int x);
  int top();
  void pop();
  bool empty();
  
  void neg();
  void add();
  void min();
  void mult();
  void div();
 private:
  Stack stk;
};


#endif
