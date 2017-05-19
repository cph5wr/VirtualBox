// Colin Harfst
// cph5wr
// 9/4/16
// List.cpp

#include <iostream>
#include "List.h"
#include "ListNode.h"
#include "ListItr.h"
using namespace std;

// Constructor
List::List() {
  head=new ListNode;
  tail=new ListNode;
  head->next=tail;
  tail->previous=head;
  head->previous=NULL;
  tail->next=NULL;
  count = 0;
}

// Copy Constructor
List::List(const List& source) {
  head=new ListNode;
  tail=new ListNode;
  head->next=tail;
  tail->previous=head;
  count=0;
  ListItr iter(source.head->next);
  while (!iter.isPastEnd()) {       // deep copy of the list
      insertAtTail(iter.retrieve());
      iter.moveForward();
  }
}

// Destructor
List::~List() {
  makeEmpty();
  delete head;
  delete tail;
}

// Equals Operator
List& List::operator=(const List& source) {
  if (this == &source)
    return *this;
  else {
    makeEmpty();
    ListItr iter(source.head->next);
    while (!iter.isPastEnd()) {
      insertAtTail(iter.retrieve());
      iter.moveForward();
    }
  }
  return *this;  
}

// Returns true if empty; else false
bool List::isEmpty() const {
  if (count == 0)
    return true;
  else
    return false;
}

// Removes all items except blank head and tail
void List::makeEmpty() {
  ListItr itr;
  itr.current=head->next;
  while((itr.current)!=tail) {
    ListItr nxt;
    nxt.current=(itr.current)->next;
    delete (itr.current);
    itr=nxt;
    count--;
  }
  head->next=tail;
  tail->previous=head;
}

// Returns an iterator that points to the ListNode in the first position
ListItr List::first() {
  ListItr itr;
  itr.current=head->next;
  return itr;
}

// Returns an iterator that points to the ListNode in the last position
ListItr List::last() {
  ListItr itr;
  itr.current=tail->previous;
  return itr;
}

// Inserts x after current iterator position p
void List::insertAfter(int x, ListItr position) {
  ListNode * prv;
  prv=position.current;
  ListNode * nxt;
  nxt=(position.current)->next;
  ListNode * node = new ListNode();
  node->value=x;
  node->next=nxt;
  node->previous=prv;
  prv->next=node;
  nxt->previous=node;
  count++;
}

// Inserts x before current iterator position p
void List::insertBefore(int x, ListItr position) {
  ListNode * prv;
  prv=(position.current)->previous;
  ListNode * nxt;
  nxt=position.current;
  ListNode * node = new ListNode();
  node->value = x;
  prv->next=node;
  nxt->previous=node;
  node->next=nxt;
  node->previous=prv;
  count++;
}

// Insert x at tail of list
void List::insertAtTail(int x) {
  ListNode * prv;
  prv=tail->previous;
  ListNode * node = new ListNode();
  node->value = x;
  prv->next=node;
  node->next=tail;
  tail->previous=node;
  node->previous=prv;
  count++;
}

// Removes the first occurrence of x
void List::remove(int x) {
  ListNode * node;
  node=head->next;
  while (node!=tail) {
    ListNode * nxt;
    nxt=node->next;
    ListNode * prv;
    prv=node->previous;
    if (node->value == x) {
      prv->next=nxt;
      nxt->previous=prv;
      delete node; // This deletes node which is of type pointer. Does this really delete the node? Doesn't it still "remove" the node from the list? 
      node=tail;
      count--;
    }
    else
      node=nxt;
  }
}

// Returns an iterator that point to the first occurrence of x, else return an iterator to the dummy tail node
ListItr List::find(int x) {
  ListItr itr;
  itr.current=head->next;
  while ((itr.current)!=tail) {
    ListItr nxt;
    nxt.current=(itr.current)->next;
    if ((itr.current)->value == x) {
      return itr;
    }
    else
      itr=nxt;
  }
  ListItr tl;
  tl.current=tail;
  return tl;
}

// Returns the number of elements in the list
int List::size() const {
  return count;
}

// Non-member function that prints a list forward or backwards
void printList(List& theList, bool forward) {
  if (forward) {
    ListItr itr = theList.first();
    while (!itr.isPastBeginning() and !itr.isPastEnd()) {
	cout << itr.retrieve() << endl;
	itr.moveForward();
    }   
  }
  else {
    ListItr itr = theList.last();
    while (!itr.isPastBeginning() and !itr.isPastEnd()) {
	cout << itr.retrieve() << endl;
	itr.moveBackward();
    }
  }
}
