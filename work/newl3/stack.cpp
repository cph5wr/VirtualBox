// Colin Harfst
// 9/12/16
// stack.cpp

#include <iostream>
#include <cstdlib>
#include "stack.h"
using namespace std;

Stack::Stack() {
  List lst;
}

Stack::~Stack() {
  lst.~List();
}

void Stack::push(int x) {
  lst.insertBefore(x,lst.first());
}

int Stack::top() {
  if (empty())
    exit(-1);
  else
    return lst.first().retrieve();
}

void Stack::pop() {
  if (empty())
    exit(-1);
  else {
    ListNode * node;
    node=lst.head->next;
    lst.head->next=node->next;
    node->next->previous=lst.head;
    delete node;
  }    
}

bool Stack::empty() {
  if (lst.size()==0)
    return true;
  else
    return false;
}

