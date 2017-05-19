// Colin Harfst
// 9/11/16
// postfixCalculator.cpp

#include <iostream>
#include "stack.h"
#include <cstdlib>
#include "postfixCalculator.h"
using namespace std;

postfixCalculator::postfixCalculator() {
}

postfixCalculator::~postfixCalculator() {
}

void postfixCalculator::push(int x) {  
  stk.push(x);
}

int postfixCalculator::top() {
  if (stk.empty()) {
    cout << "The stack used is empty. There is no top element to return.";
    exit(-1);
  }
  else { 
    int ret = stk.top();
    return ret;
  } 
}

void postfixCalculator::pop() {
  if (stk.empty()) {
    cout << "The stack used is empty. There is no top element to remove.";
    exit(-1);
  }
  else {
    stk.pop();
  }
}

bool postfixCalculator::empty() {
  return stk.empty();
}

void postfixCalculator::neg() {
  int x = top();
  pop();
  push(-x);
}

void postfixCalculator::add() {
  int x = top();
  pop();
  int y = top();
  pop();
  push(x+y);
}

void postfixCalculator::min() {
  int x = top();
  pop();
  int y = top();
  pop();
  push(y-x);
}

void postfixCalculator::mult() {
  int x = top();
  pop();
  int y = top();
  pop();
  push(x*y);
}

void postfixCalculator::div() {
  int x = top();
  pop();
  int y = top();
  pop();
  push(y/x);
}

