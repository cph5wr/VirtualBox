/* Colin Harfst
9/17/16
prelab4.cpp */

#include <iostream>
#include <math.h>
using namespace std;

void sizeOfTest() {
  cout << "The size of an integer is " << sizeof(int) << " byte(s)." << endl;
  cout << "The size of an unsigned integer is " << sizeof(unsigned int) << " byte(s)." << endl;
  cout << "The size of a float is " << sizeof(float) << " byte(s)." << endl;
  cout << "The size of a double is " << sizeof(double) << " byte(s)." << endl;
  cout << "The size of a character is " << sizeof(char) << " byte(s)." << endl;
  cout << "The size of a boolean is " << sizeof(bool) << " byte(s)." << endl;
  cout << "The size of an integer pointer is " << sizeof(int*) << " byte(s)." << endl;
  cout << "The size of a character pointer is " << sizeof(char*) << " byte(s)." << endl;
  cout << "The size of a double pointer is " << sizeof(double*) << " byte(s)." << endl;
}

void outputBinary(unsigned int n) {
  for (int i = 31; i>=0; i--) {
    int x = n-(pow(2,i));
    if (x>=0) {
      cout << 1;
      n = x;
      if (i==0)
	cout << endl;
    }
    else {
      cout << 0;
      if (i==0)
	cout << endl;
    }
  } 
}

void overflow() {
  unsigned int x = pow(2,32)-1;
  outputBinary(x+1);
  cout << "The reason calling overflow() prints out the 32 bit binary string for 0 is because outputBinary() takes in values of type unsigned int. In the style of 'one's complement' and 'two's complemet', the unsigned int data type in C++ 'wraps around'. That is, when adding two the maximum value of type unsigned int, the unsigned int will wrap around to the lowest value of type unsigned int: 0. In the case of 32 bits, (2^32)-1 is the larges possible unsigned integer and so 2^32=0 in this modular manner." << endl;
}

int main() {
  sizeOfTest();
  cout << endl;
  unsigned int x;
  cout << "Enter a value to be output in binary." << endl;
  cin >> x;
  outputBinary(x);
  cout << endl;
  overflow();
}
