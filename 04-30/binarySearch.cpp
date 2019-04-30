#include <iostream>
using namespace std;

/* binarySearch is a function that takes a sorted array and its size,
   and a value (possibly) within the array to search for.
   It returns the index of that thing if it's there, otherwise
   -1.
*/
int binarySearch(int arr[], int size, int value_to_look_for) {
    // keep searching in the middle of your "search space"
    int start = 0;
    int end   = size-1;
    int middle;
    // keep searching as long as start and end make sense
    while (start <= end) {
        middle = (start + end) / 2;
        if (arr[middle] > value_to_look_for) {
            // move end to the middle - 1
            end = middle - 1;
        } else if (arr[middle] < value_to_look_for) {
            start = middle + 1;
        } else {
            // if we get here, arr[middle] == value_to_look_for
            // middle was the index; return it
            return middle;
        }
    }

    return -1; // we couldn't find it
}

int main() {
    int a[] = {1, 2, 4, 12, 16, 32, 55}; // sorted

    cout << binarySearch(a, 7, 4) << endl;
    cout << binarySearch(a, 7, 13) << endl;

    return 0;
}