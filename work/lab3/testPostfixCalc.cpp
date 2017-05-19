// Colin Harfst
// 9/12/16
// testPostfixCalc.cpp

#include <iostream>
#include <stack>
#include <cstdlib>
#include "postfixCalculator.h"
using namespace std;

int main() {
  postfixCalculator p;
  
  while(true) {
    string s;
    cin >> s;
    if(s == "") {
      break;
    }
    if (s=="~")
      p.neg();
    else if (s=="+")
      p.add();
    else if (s=="-")
      p.min();
    else if (s=="*")
      p.mult();
    else if (s=="/")
      p.div();
    else {
      int x = atoi(s.c_str());
      p.push(x);
    }  
  }

  cout << p.top() << endl;

  return 0;  

}
