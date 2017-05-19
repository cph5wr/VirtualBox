// Colin Harfst
// cph5wr
// lab 103
// 31 October 2016

#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;
extern "C" int product (int, int);
extern "C" int power (int, int);

int main() {
  int x, y;
  cout << "Please enter two integers:" << endl;
  cin >> x;
  cin >> y;
  int prod = product(x, y);
  cout << "The result of the product function is " << prod << "." << endl;
  int pow = power(x, y);
  cout << "The result of the power function is " << pow << "." << endl;
}
