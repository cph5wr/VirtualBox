// Colin Harfst
// cph5wr
// lab section 103
// 28 November 2016

#include <iostream>
#include <vector>
#include <string>
#include <map>

#ifndef MIDDLEEARTH_H
#define MIDDLEEARTH_H

using namespace std;

// see the comments in the lab11 write-up, or in middleearth.cpp

/** \author CS2150
 */
class MiddleEarth {
private:
  int num_city_names; /**< Member variable that counts the number of city names. */
  int xsize; /**< Member variable that controls the distance between cities in the x-direction. */
  int ysize; /**< Member variable that controls the distance between cities in the y-direction. */
  vector<float> xpos; /**< Member variable that records the x-positions of each city. */
  vector<float> ypos; /**< Member variable that records the y-positions of each city. */
  vector<string> cities; /**< A list of cities. */
  float *distances; /**< Distances **/
  map<string, int> indices; /**< A map from city names to their index. */

public:
  MiddleEarth (int xsize, int ysize, int numcities, int seed);
  ~MiddleEarth();
  void print();
  void printTable();
  float getDistance (string city1, string city2);
  vector<string> getItinerary(unsigned int length);
};

#endif
