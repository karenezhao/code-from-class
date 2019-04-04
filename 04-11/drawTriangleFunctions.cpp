#include <iostream>
#include <cstdlib>
using namespace std;

// drawTriangle is a function that just *does* something
// the type of functions that do things, but don't actually return things is called "void"
// you don't need to return anything in a void-type function
void drawTriangle(int size);

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cerr << "usage: " << argv[0] << " n\n";
        exit(1);
    }

    int n = atoi(argv[1]);
    drawTriangle(n);

    return 0;
}

void drawTriangle(int size) {
    for (int i = 0; i < size; i++) { // this will iterate size times (keeping track of which line we're on)
        // I'm on a line and I need to print i+1 stars
        for (int j = 0; j < i + 1; j++) {
            // now I just need to print out a single star
            cout << "* ";
        }
        // we're done with the line; print a new line!
        cout << endl;
    }
}