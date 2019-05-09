#include <iostream>
using namespace std;

const double pi = 3.14; // consts cannot be changed
// double pi = 3.14;
// ^ if I did that, I could change pi to be 3.15 later


// const int arr[]: arr is an array of int constants
// (can't touch the values inside an array)
int good_sum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    arr[0] = 5; // also also not allowed

    return sum;
}

// this is another completely valid way to pass along arrays
int good_sum2(const int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    arr[0] = 5; // also also also not allowed

    return sum;
}

int bad_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    arr[0] = 5; // totally allowed, but not good

    return sum;
}

void test_passing_constants(double d) {}

// this could technically do something like
// *d = 4.14; -- shouldn't be allowed because 
// we passed along pi in main
void test_passing_constants_2(double *d) {}

int main(int argc, char **argv)
{
    // e is still a double, but it's a CONSTANT double
    const double e = 2.72;

    pi = 3.1415; // not allowed
    e = 2.7183;  // also not allowed

    int arr[] = {1,2,3};

    // you can always convert a non-const to a const
    // that's what's happening when good_sum is called,
    // because it expects an array of const int
    cout << good_sum(arr, 3) << endl;

    cout << good_sum2(arr, 3) << endl;

    test_passing_constants(pi);

    test_passing_constants_2(&pi);

    return 0;
}