#include <iostream>
using namespace std;

void printArrayRecursively(int *a, int size) {
    if (size == 0) {
        // base case--there's nothing to print
        return;
    }

    // otherwise: recursive case

    // print first element
    cout << a[0] << endl;

    // print smaller array
    printArrayRecursively(a+1, size-1);
}

int main(int argc, char *argv[])
{
    int a[] = {1, 2, 3, 4, 5};

    printArrayRecursively(a, 5);

    return 0;
}