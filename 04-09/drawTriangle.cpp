#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cerr << "usage: " << argv[0] << " n\n";
        exit(1);
    }

    int n = atoi(argv[1]);
    for (int i = 0; i < n; i++) { // this will iterate n times (keeping track of which line we're on)
        // I'm on a line and I need to print i+1 stars
        for (int j = 0; j < i+1; j++) {
            // now I just need to print out a single star
            cout << "* ";
        }
        // we're done with the line; print a new line!
        cout << endl;
    }

    return 0;
}