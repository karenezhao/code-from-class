#ifndef POINTARRAYFUNCS_H
#define POINTARRAYFUNCS_H

#include <fstream>
#include <cassert>
#include "point.h"
using namespace std;

// opens points.txt, reads from it, and writes to the arr array
// returns the actual size of the array
int readFileAndPopulateArray(Point *arr, int max_size);
Point* findPointClosestToOrigin(Point arr[], int size);

#endif