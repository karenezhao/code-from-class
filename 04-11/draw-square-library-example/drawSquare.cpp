#include "drawSquare.h"

// drawSquare.cpp is the corresponding implementation file for drawSquare.h

void drawSquare(int size) {
    for (int i = 0; i < size; i++) { // this will iterate size times (keeping track of which line we're on)
        // I'm on a line and I need to print n stars
        for (int j = 0; j < size; j++) {
            // now I just need to print out a single star
            cout << "* ";
        }
        // we're done with the line; print a new line!
        cout << endl;
    }
}