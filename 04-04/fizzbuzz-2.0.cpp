#include <iostream> // gives me cin and cout
#include <cstdlib> // gives me atoi
using namespace std;

int main(int argc, char *argv[]) {
    int x; // declares x--makes space for it in memory

    // make sure we have enough arguments before we do anything
    if (argc != 2) {
        cout << "Improper number of arguments. ";
        cout << "You should have typed something like: \n";
        cout << argv[0] << " 5" << endl;
        // stop the program
        exit(1); // exit(return code)
    }

    // take the first argument, and set it to x
    // (after converting it to a number)
    x = atoi(argv[1]);

    if (x%3 == 0 && x%5 == 0) {
        // if it's divisible by 3, output fizz
        cout << "fizzbuzz" << endl;
    } else if (x%5 == 0) {
        // if it's divisible by 5, output buzz
        cout << "buzz" << endl;
    } else if (x % 3 == 0) {
        cout << "fizz" << endl;
    } else {
        // if we got here, x isn't divisible by 3 or 5
        // output the number
        cout << x << endl;
    }
    

    return 0;
}