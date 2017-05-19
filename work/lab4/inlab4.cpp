/* Colin Harfst
9/20/16
inlab4.cpp */

#include <iostream>
using namespace std;

union foo {
  int i;
  unsigned int x;
  float f;
  double d;
  char c;
  bool b;
  

} bar;

int main() {
  bool b = false;
  char c = 'C';
  int i = 0;
  double d = 0.0;
  int* p = NULL;
  
  cout << b << " " << c << " " << i << " " << d << " " << p << endl;

  //-----SECOND SECTION OF CODE-----
  int IntArray[10];
  char CharArray[10];

  for (int i = 0; i<10; i++)
    IntArray[i]=i;
  CharArray[0]='a';
  CharArray[1]='b';
  CharArray[2]='c';
  CharArray[3]='c';
  CharArray[4]='e';
  CharArray[5]='f';
  CharArray[6]='g';
  CharArray[7]='h';
  CharArray[8]='i';
  CharArray[9]='j';
  
  int IntArray2D[6][5];
  char CharArray2D[6][5];

  for (int i = 0; i<6; i++) {
    for (int j = 0; j<5; j++) {
      if (i>=j)
	IntArray2D[i][j]=i*j;
      else
	IntArray2D[i][j]=-(i*j);
    }
  }

  for (int i = 0; i<6; i++) {
    for (int j = 0; j<5; j++)
      CharArray2D[i][j]='a';
  }

  cout << "First a memory address is reserved for IntArray2D[0][0], then we have that &(IntArray2D[i][j])=&(IntArray2d[i][j-1])+sizeof(int) and &IntArray2D[i][0]=&(IntArray2D[i-1][4])+sizeof(int) where 4 is the maximum index of j. Thinking of the array as a table it assigns 4 bytes of memory for each cell in the table and when you get to the end of the row, the next spot in memory is the first entry in the next row of the table." << endl;
}
