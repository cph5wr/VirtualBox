/* Colin Harfst
cph5wr
10/14/16
lab 103 */

// The big-theta running time of the word-search portion of the main method is 160*x*y where x and y are the number of rows and columns respectively.
// 160=8*20 as there are 8 directions to search and 20 possible lengths of words (3 to 22 letters).
// Solving the word search is proportional to both the number of rows and the number of columns.
// This also assumes that ht.find(wrd) is constant time.
// Technically, the worst-case time here is linear and we can consider the overall big-theta running time to be 160*x*y*n.

#include <iostream>
#include <fstream>
#include <string>
#include "hashTable.h"
#include "timer.h"
using namespace std;

#define MAXROWS 500
#define MAXCOLS 500
char grid[MAXROWS][MAXCOLS];

bool readInGrid (string filename, int &rows, int &cols);
char* getWordInGrid (int startRow, int startCol, int dir, int len,
                     int numRows, int numCols);
string getDir(int d);
bool checkprime(unsigned int p);
int getNextPrime (unsigned int n);

int main (int argc, char* argv[]) {
  int n = 0;
  string line;
  ifstream myfile ( (string(argv[1])).c_str() );
  if (myfile.is_open()) {
    while (getline(myfile,line)) {
      n++;
    }
    myfile.close();
  }
  int k = getNextPrime((unsigned int) n);
  hashTable ht(k);
  string word;
  ifstream file ( (string(argv[1])).c_str() );
  if (file.is_open()) {
    while (getline(file,word)) {
      ht.insert(word);
    }
    file.close();
  }  
  int rows, cols;
  bool result = readInGrid (string(argv[2]), rows, cols);
  if ( !result ) {
    cout << "Error reading in file!" << endl;
    return 0;
  }
  int count=0;
  timer t;
  t.start();
  for (int x=0; x<rows; x++) {
    for (int y=0; y<cols; y++) {
      for (int d=0; d<8; d++) {
	for (int l=3; l<23; l++) {
	  char* str = getWordInGrid(x,y,d,l,rows,cols);
	  string wrd(str);
	  if (ht.find(wrd) && wrd.length()==l) {
	    string s = getDir(d);
	    cout << s << " (" << x << "," << y << "): ";
	    cout << wrd << endl;
	    count++;
	  }
	}
      }
    }
  }
  t.stop();
  double time = t.getTime();
  cout << count << " words found" << endl;
  cout << "Found all words in " << time << " seconds" << endl;
  int tm = (int) time*1000; // For in-lab
  cout << tm << endl; // For in-lab
  return 0;
}

bool readInGrid (string filename, int &rows, int &cols) {
    string line;
    ifstream file(filename.c_str());
    if ( !file.is_open() )
        return false;
    file >> rows;
    //cout << "There are " << rows << " rows." << endl;
    getline (file,line);
    file >> cols;
    //cout << "There are " << cols << " cols." << endl;
    getline (file,line);
    getline (file,line);
    file.close();
    int pos = 0;
    for ( int r = 0; r < rows; r++ ) {
        for ( int c = 0; c < cols; c++ ) {
            grid[r][c] = line[pos++];
	    // cout << grid[r][c];
        }
	// cout << endl;
    }
    // cout << endl;
    return true;
}

char* getWordInGrid (int startRow, int startCol, int dir, int len,
                     int numRows, int numCols) {
    static char output[256];
    if ( len >= 255 )
        len = 255;
    int pos = 0, r = startRow, c = startCol;
    for ( int i = 0; i < len; i++ ) {
        if ( (c >= numCols) || (r >= numRows) || (r < 0) || (c < 0) )
            break;
        output[pos++] = grid[r][c];
        switch (dir) {
            case 0:
                r--;
                break; // north
            case 1:
                r--;
                c++;
                break; // north-east
            case 2:
                c++;
                break; // east
            case 3:
                r++;
                c++;
                break; // south-east
            case 4:
                r++;
                break; // south
            case 5:
                r++;
                c--;
                break; // south-west
            case 6:
                c--;
                break; // west
            case 7:
                r--;
                c--;
                break; // north-west
        }
    }
    output[pos] = 0;
    return output;
}

string getDir(int d) {
  if (d==0)
    return "N";
  else if (d==1)
    return "NE";
  else if (d==2)
    return "E";
  else if (d==3)
    return "SE";
  else if (d==4)
    return "S";
  else if (d==5)
    return "SW";
  else if (d==6)
    return "W";
  else
    return "NW";
}

bool checkprime(unsigned int p) {
    if ( p <= 1 )
        return false;
    if ( p == 2 )
        return true;
    if ( p % 2 == 0 )
        return false;
    for ( int i = 3; i*i <= p; i += 2 )
        if ( p % i == 0 )
            return false;
    return true;
}

int getNextPrime (unsigned int n) {
    while ( !checkprime(++n) );
    return n;
}
