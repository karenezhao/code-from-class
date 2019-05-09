#include <iostream>
using namespace std;

int* createAnInt() {
    int *p = new int;

    // new T (where T is some type) "returns" a pointer to a T
    // that got made on the heap
    return p; // "new int" makes a new integer on the heap
}

// new int[n] makes an array of size n of ints on the heap
int* createIntArray(int size) {
    return new int[size];
}

int main(int argc, char *argv[])
{
    int *i = createAnInt(); // i is a pointer to that new int
    *i = 5;


    // can't say "delete i" here, because I still need to use i
    cout << *i << endl;

    // I'm done with the heap variable that is pointed to by i now
    delete i;

    int *arr = createIntArray(5); // brand new array of size 5
    arr[0] = 1;
    arr[1] = 2;

    // when I'm done with the array
    delete[] arr; // this deletes the entire array off the heap

    return 0;
}