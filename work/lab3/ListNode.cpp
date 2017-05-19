// Colin Harfst
// cph5wr
// 9/4/16
// ListNode.cpp

#include <iostream>
#include "List.h"
#include "ListNode.h"
#include "ListItr.h"
using namespace std;

// Constructor
ListNode::ListNode() {
  value = 0;
  next = NULL;
  previous = NULL;
}
