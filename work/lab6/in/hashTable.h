/* Colin Harfst
10/16/2016
cph5wr
lab 103 */

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

class hashTable {
 public:
  hashTable(int p);
  void insert(string s);
  bool find(string s);
  list<string> front();
  list<string> at(int i);
  int getSize();
  
 private:
  vector<list<string> > tbl;
};

#endif
