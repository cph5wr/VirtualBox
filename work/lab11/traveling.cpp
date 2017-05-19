// Colin Harfst
// cph5wr
// 29 Nov 16
// lab section 103

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

#include "middleearth.h"

/** 
 * @brief This function computes the total distance of a route.
 *
 * \author Colin Harfst
 *
 * \details This method will compute the full distance of the cycle that starts
 * at the 'start' parameter, goes to each of the cities in the dests
 * vector IN ORDER, and ends back at the 'start' parameter.
 *
 * @param me This is the instance of Middle Earth.
 * @param start This is the starting and ending city.
 * @param dests These are the cities to visit.
 *
 */
float computeDistance (MiddleEarth &me, string start, vector<string> dests);

/** 
 * @brief This function prints a given route.
 *
 * \author Colin Harfst
 *
 * \details This method will print the entire route, starting and ending at the
 * 'start' parameter.  The output should be of the form:
 * Erebor -> Khazad-dum -> Michel Delving -> Bree -> Cirith Ungol -> Erebo
 *
 * @param start This is the starting and ending city.
 * @param dests These are the cities to visit.
 */
void printRoute (string start, vector<string> dests);

/** \author Colin Harfst
 * @brief main method
 */
int main (int argc, char **argv) {
    // check the number of parameters
    if ( argc != 6 ) {
        cout << "Usage: " << argv[0] << " <world_height> <world_width> "
             << "<num_cities> <random_seed> <cities_to_visit>" << endl;
        exit(0);
    }
    // we'll assume the parameters are all well-formed
    int width, height, num_cities, rand_seed, cities_to_visit;
    sscanf (argv[1], "%d", &width);
    sscanf (argv[2], "%d", &height);
    sscanf (argv[3], "%d", &num_cities);
    sscanf (argv[4], "%d", &rand_seed);
    sscanf (argv[5], "%d", &cities_to_visit);
    // Create the world, and select your itinerary
    MiddleEarth me(width, height, num_cities, rand_seed);
    vector<string> dests = me.getItinerary(cities_to_visit);
    string start=dests[0];
    dests.erase(dests.begin());
    sort(dests.begin(),dests.end());
    float dist=computeDistance(me,start,dests);
    vector<string> best = dests;
    /**This is where the code checks every possible permutation and adjusts the
     * minimum distance accordingly.
     */
    do {
      if (computeDistance(me,start,dests)<dist) {
	dist=computeDistance(me,start,dests);
	best=dests;
      }
    } while (next_permutation(dests.begin(),dests.end()));\

    cout << sizeof(me) << endl;
    cout << "Minimum path has distance " << dist << ": ";
    printRoute(start,best);
    return 0;
}

// This method will compute the full distance of the cycle that starts
// at the 'start' parameter, goes to each of the cities in the dests
// vector IN ORDER, and ends back at the 'start' parameter.
float computeDistance (MiddleEarth &me, string start, vector<string> dests) {
  float dist=0.0;
  for (int i=0; i<dests.size()-1; i++)
    dist+=me.getDistance(dests[i],dests[i+1]);
  dist+=me.getDistance(start,dests[0]);
  dist+=me.getDistance(dests[dests.size()-1],start);
  return dist;
}

// This method will print the entire route, starting and ending at the
// 'start' parameter.  The output should be of the form:
// Erebor -> Khazad-dum -> Michel Delving -> Bree -> Cirith Ungol -> Erebor
void printRoute (string start, vector<string> dests) {
  cout << start << " -> ";
  for (int i=0; i<dests.size(); i++)
    cout << dests[i] << " -> ";
  cout << start << endl;
}
