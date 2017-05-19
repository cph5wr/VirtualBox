/* Colin Harfst
10/16/2016
cph5wr
lab 103 */

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <math.h>
#include <algorithm>
#include "hashTable.h"
using namespace std;

hashTable::hashTable(int p) {
  list<string> emptyList;
  vector<list<string> > tb(p, emptyList);
  tbl = tb;
}

void hashTable::insert(string s) {
  int x=0;
  for (int i=0; i<s.length(); i++) {
    int r = (int) s.c_str()[i];
    int y = r*pow(5,i);
    x=x+y;
  }
  int val;
  val=((x)%(tbl.size()));
  tbl[val].push_back(s);
  //cout << s << " hashes to " << val << endl;
}

bool hashTable::find(string s) {
  int x=0;
  for (int i=0; i<s.length(); i++) {
    int r = (int) s.c_str()[i];
    int y = r*pow(5,i);
    x=x+y;
  }
  int val;
  val=((x)%(tbl.size()));
  //cout << val << ": index of word " << s << endl;
  list<string> lst = tbl[val];
  list<string>::iterator it;  
  //cout << "printing values in list..." << endl;
  for ( it = lst.begin(); it != lst.end(); it++ ) {
    //cout << *it << endl;
  }  
  it = std::find (lst.begin(), lst.end(), s);
  if (it!=lst.end())
    return true;
  else
    return false;
}

list<string> hashTable::front() {
  return tbl.front();
}

list<string> hashTable::at(int i) {
  return tbl[i];
}

int hashTable::getSize() {
  return tbl.size();
}

/* int main() {
  hashTable tb(5);
  
  tb.insert("apple");
  tb.insert("banana");
  tb.insert("coconut");
  tb.insert("orange");
  tb.insert("berry");
  tb.insert("tomato");
  
  cout << tb.find("apple") << endl;
  cout << tb.find("banana") << endl;
  cout << tb.find("coconut") << endl;
  cout << tb.find("strawberry") << endl;
  cout << tb.find("blueberry") << endl;
  cout << tb.find("tomato") << endl;
} */
