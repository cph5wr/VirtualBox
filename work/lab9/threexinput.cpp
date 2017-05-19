/* Colin Harfst
cph5wr
lab section 103
14 November 2016 */

#include <iostream>
#include "timer.h"
#include <cstdlib>
using namespace std;
extern "C" int threexplusone (int);

int main() {
  int x, n;
  cout << "Please enter a positive integer (to be passed as a parameter):" << endl;
  cin >> x;
  cout << "Please enter a positive integer (number of times to call subroutine):" << endl;
  cin >> n;
  timer t;
  t.start();
  for (int i=0; i<n; i++)
    threexplusone(x);
  t.stop();
  int result = threexplusone(x);
  cout << "We recursively called " << result << " times before the Collatz congecture returned a 1." << endl;
  double time = t.getTime();
  time = 1000*time;
  cout << "We called the subroutine " << n << " times. These calls took " << time << " seconds." << endl;  
}
