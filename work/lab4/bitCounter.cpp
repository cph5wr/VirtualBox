/* Colin Harfst
9/22/16
bitCounter.cpp */

#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int bitCount(int n) {
  if (n==0)
    return 0;
  else if (n==1)
    return 1;
  else if ((n%2)==0)
    return bitCount(n/2);
  else
    return 1+bitCount(floor(n/2));
}

int main(int argc, char* argv[]) {
  // the command-line parameters are stored as C-style 
  // strings in the argv[] array. argc contains 1 more 
  // than the number of command line parms specified.
  // The 0th command line parameter is the program 
  // name. We can print a C-style string via cout:
  cout << "This program is called '" << argv[0] 
       << "'" << endl;
  cout << "The following are the command " 
       << "line parameters you specified: " << endl;
  // this for loop starts at 1 to avoid printing the 
  // name of the program
  for ( int i = 1; i < argc; i++ ) {
    // we can convert the C-style strings into 
    // C++-style strings, and then print them:
    if (i==1) {
      string s(argv[i]);
      int x = atoi(s.c_str());
      cout << "\t" << s << ", which has " << bitCount(x) << " one(s) in its binary representation" << endl;
    }
    else
      cout << "You were only supposed to enter one integer command line argument!" << endl;
  }
  return 0;
}
