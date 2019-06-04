#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include "drawing_and_sleeping.h"
#include "point.h"
using namespace std;

int randomInt(int from, int to)
{
    assert(to >= from);
    return rand() % (to - from + 1) + from;
}

int main()
{
    // what should our ball look like?!
    const char ball_character = '*';

    // seed the random number generator, so that the program works
    // differently every time
    srand(time(0));

    Point ball = {0, 0};
    Point direction = {0, 0};

    // initialize our ball at some random location on the terminal
    // ROWS AND COLS START AT (1,1), NOT (0,0)

    // initialize the ball in a random direction
    while (direction.row == 0 && direction.col == 0) {
        // we want the ball to move, so row and col can't both be 0
        // keep trying until we randomly pick a non-<0,0> direction
    }

    // draw the ball in its initial location

    while (true) {
        // wait a little bit

        // clear the screen

        // if we hit a wall, bounce the ball off it

        // move the ball's location in its (possibly new) direction

        // draw the ball in its new location
    }

    return 0;
}


