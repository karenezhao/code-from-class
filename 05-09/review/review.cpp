//////////////////////
// Midterm 2 Review //
//////////////////////

// Plan: 

// Separate the implementation across several files:
// review.cpp, point.h, pointFuncs.h, pointFuncs.cpp, 
// pointArrayFuncs.h, pointArrayFuncs.cpp

// 1. Take a file that represents a bunch of 3D Points
// 2. Create a new array of Points
// 3. Start populating the array with the Points from the file
// 4. Find the Point closest to the origin and return a pointer to it
//    (use pointer arithmetic and a while loop to iterate through the array)
// 5. Print out the Point
// 6. Delete the array of Points at the end of the program

// 7. Write a Makefile without using any default rules
// 8. Draw memory diagrams of setPoint and the loop in findPointClosestToOrigin
// 9. Commit the code to git

#include "point.h"
#include "pointArrayFuncs.h"
#include "pointFuncs.h"

const int MAX_POINTS = 256;

int main(int argc, char *argv[])
{
    Point *arr = new Point[MAX_POINTS]; 
    // arr is an array of Points on the heap of size MAX_POINTS

    int size = readFileAndPopulateArray(arr, MAX_POINTS); // this will read points.txt

    Point *point_closest_to_origin = findPointClosestToOrigin(arr, size);

    printPoint(point_closest_to_origin);

    delete[] arr;
    return 0;
}