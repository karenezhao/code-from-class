#include <iostream>
#include <cassert>
using namespace std;

void printFrom1ToN(int n) {
    // base case (n == 1)
    if (n == 1) {
        cout << n << endl;
        return;
    }
    // recursive case (n > 1)
    // first print from 1 to n-1
    printFrom1ToN(n-1); // I assume that this does the right thing
    // then print n
    cout << n << endl;
}

void printFromNTo1(int n) {
    // base case (n == 1)
    if (n == 1) {
        cout << n << endl;
        return;
    }
    // recursive case (n > 1)
    // first print n
    cout << n << endl;
    // then print from n-1 to 1
    printFrom1ToN(n-1); // I assume that this does the right thing
}

int main(int argc, char *argv[])
{
    printFrom1ToN(5);

    return 0;
}