#include <iostream> // gives me cin, cout, cerr
#include <cstdlib> // gives me atoi and exit
using namespace std;

int main(int argc, char *argv[]) {
    int x = 5; // declares x with a value of 5
    int y(5); // declares y with a value of 5 (this is contructor syntax)
    double d(3.14), e(2.7); // declares d and e with the given values

    cout << x << endl;
    cout << y << endl;
    cout << d << endl;
    cout << e << endl;

    // e(7); -- this syntax only works when declaring the variable for the first time

    return 0; // end the program with an exit code of 0 (success)
}