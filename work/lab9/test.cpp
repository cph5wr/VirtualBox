/* Colin Harfst
cph5wr
testtest */

#include <iostream>
using namespace std;

int fact(int x) {
  if (x==1)
    return 1;
  else
    return x*fact(x-1);
}

int main() {
  int x=1;
  if(x)
    fact(2);
  else
    fact(3);
}
