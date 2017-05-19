#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "ideal.h"
#include <vector>
using namespace std;

int main (int argc, char** argv) {
  // Check command line parameter
  if (argc != 2) {
    cout << "Must supply the input file name as the one and only parameter" << endl;
    exit(1);
  }
  FILE *fp = fopen(argv[1], "r");
  if ( fp == NULL ) {
    cout << "File '" << argv[1] << "' does not exist!" << endl;
    exit(2);
  }
  
  char g;
  bool check; // Used for commas in the given file
  string gen;
  vector<Ideal> vec;
  Ideal* id = new Ideal();
  while ((g=fgetc(fp))!=EOF) {
    // Read in each character and create a list of ideals
    if (g=='(') {
      check=true;
    }
    else if (g==')') {
      id->addGen(gen); // Sets the value of final generator
      gen="";
      check=false;
      vec.push_back(*id);
      id->makeEmpty();
    }
    else if (g=='v'||g=='w'||g=='x'||g=='y'||g=='z') {
      gen+=g;
    }
    else if (g==',') {
      if (check) {
	id->addGen(gen); // Sets the value of all but the final generator
	gen="";
      }
    }
  }
  for (int i; i<vec.size(); i++) {
    vec[i].print(); // Prints all of the ideals in the given file
  }
}
