#include "pointArrayFuncs.h"
#include "pointFuncs.h"

// opens points.txt, reads from it, and writes to the arr array
// returns the actual size of the array
int readFileAndPopulateArray(Point *arr, int max_size)
{
    ifstream ifs;
    ifs.open("points.txt");

    if (!ifs) {
        // bad file
        return 0; // we couldn't fill in any elements of the array
    }

    // if we got this far, the file was okay
    double x, y, z;
    x = y = z = 0.0;

    int current_index = 0;

    // read from ifs until we hit -1, -1, -1
    while (true) {
        // read values into x, y, and z, and set the next element of the array
        ifs >> x >> y >> z;

        if (x == -1 && y == -1 && z == -1) {
            break; // stop the loop now
        }

        if (current_index >= max_size) {
            break; // don't write past the end of the array
        }

        setPoint(arr[current_index], x, y, z);

        current_index++;
    }

    // SORRY I FORGOT TO DO THIS IN THE VIDEO
    ifs.close();

    // need to return the # of elements we added to the array
    return current_index;
}


Point* findPointClosestToOrigin(Point arr[], int size)
{
    assert(size > 0);

    Point *closest_to_origin = arr; // guess that the first element was the closest
    Point *current_point = arr + 1; // pointer to the second element of arr (i.e., &arr[1])
    int i = 1; // starting from the first element
    while (i < size) {
        // see if the current Point we're on is closer to the origin than the Point we currently
        // think is the closest to the origin
        if (distanceToOrigin(current_point) < distanceToOrigin(closest_to_origin)) {
            closest_to_origin = current_point; // update our guess
        }

        current_point = current_point + 1; // move the pointer over
        i++;
    }

    return closest_to_origin; // return a pointer to the closet Point
}
