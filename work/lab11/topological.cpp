// Colin Harfst
// cph5wr
// lab section 103
// 28 November 2016

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <map>
#include <string>
using namespace std;

/** @brief Finds the next node with in-degree of zero.
 *
 * This function is called within main. It will be called 100 times (as there are at most 100 verticies). If the call results in a positive index being returned, the main method will cout the string corresponding to that index.
 * @return The index in the graph that has indegree zero.
 * @param (&graph) This graph (2D array) is passed by reference, so after finding a vertex with indegree zero, the other verticies can be modified accordingly.
 */
int findIDZ(int (&graph)[101][101]) {
  for (int i=1; i<101; i++) {
    int sum=0;
    for (int j=1; j<101; j++)
      sum += graph[j][i];
    if (sum==0) {
      for (int k=1; k<101; k++) {
	graph[i][k]=0;
	graph[k][i]=-1;
      }
      return i; 
    }
  } 
  return 0;
}

/** \author Colin Harfst
 *
 * This main method will read through the file (given as a command line parameter) and will then create an adjacency matrix corresponding to the information in the file. Main will then go through the adjacency matrix and print out a valid topological sort.
 */
int main (int argc, char **argv) {
    // verify the correct number of parameters
    if ( argc != 2 ) {
        cout << "Must supply the input file name as the one and only parameter" << endl;
        exit(1);
    }
    // attempt to open the supplied file
    ifstream file(argv[1], ifstream::binary);
    // report any problems opening the file and then exit
    if ( !file.is_open() ) {
        cout << "Unable to open file '" << argv[1] << "'." << endl;
        exit(2);
    }

    int graph[101][101] = {{0}};
    map<string, int> mymap;
    map<int, string> invmap;
    string s1, s2;
    int i = 1;
    file >> s1;
    file >> s2;

    // creates adjacency matrix (and maps courses to an index)
    while ((s1!="0") && (s2!="0")) {
      if (mymap[s1]==0) {
	mymap[s1]=i;
	invmap[i]=s1;
	i++;
      }
      if (mymap[s2]==0) {
	mymap[s2]=i;
	invmap[i]=s2;
	i++;
      }
      graph[mymap[s1]][mymap[s2]]=1;
      file >> s1;
      file >> s2;
    }

    for (int count=1; count<101; count++) {
      int ind = findIDZ(graph);
      if (invmap[ind]!="")
	cout << invmap[ind] << " ";
    }
    cout << endl;
    
    file.close();
}
