#include <iostream>
using namespace std;

// imagine x++ is a function
int xplusplus(int &x) {
    int oldvalue = x;
    x = x + 1;
    return oldvalue;
}
// x++ is equivalent to xplusplus(x)
// int y = xplusplus(x);

void exprs2() {
    int x = 5;

    int y = x++; // change x to 6, and set y to the old value

    cout << y << endl;

    cout << x++ << endl;
    cout << ++x << endl;

    // any assignment statement where you try to use 
    // its value is set to the value that your variable
    // was set to
    cout << (x += 1) << endl;

    // this is useful 
    // x = (y = (z = 0));
}

int *p;

void avoiding_memory_leaks(int **p2) {
    int *y = new int(55);

    cout << *y << endl;

    // this is a memory leak unless you save the address
    // stored in y somewhere, or alternatively
    // say delete y

    p = y; // now y is saved inside of p, and p never gets deleted
           // because it's a global
    *p2 = y; // now y is saved inside of whatever p2 points to
}

void printArray(int arr[], int size) {
    while (size > 0) {
        cout << *arr << " ";
        arr = arr + 1;
        size = size - 1;
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    int arr2[3] = {1,2,3};

    printArray(arr2, 3);

    int *p2;

    avoiding_memory_leaks(&p2);
    // p2 holds the address of that new int in memory

    return 0;
}