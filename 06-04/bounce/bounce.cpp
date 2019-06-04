#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include "drawing_and_sleeping.h"
#include "point.h"
using namespace std;

// return a random number from `from` to `to`
int randomInt(int from, int to)
{
    assert(to >= from);
    return rand() % (to - from + 1) + from;
}

int main()
{
    // what should our ball look like?!
    const char ball_character = 'o';

    // seed the random number generator, so that the program works
    // differently every time
    srand(time(0));

    Point ball = {0, 0};
    // direction is an offset (e.g., up-left is (-1, 1))
    Point direction = {0, 0};

    // initialize our ball at some random location on the terminal
    // ROWS AND COLS START AT (1,1), NOT (0,0)
    // the location of the ball should be somewhere between
    // (1,1) and (rows, cols)
    ball.row = randomInt(1, getTerminalRows());
    ball.col = randomInt(1, getTerminalCols());

    // initialize the ball in a random direction
    while (direction.row == 0 && direction.col == 0) {
        // we want the ball to move, so row and col can't both be 0
        // keep trying until we randomly pick a non-<0,0> direction
        direction.row = randomInt(-1, 1);
        direction.col = randomInt(-1, 1);
    }
    // once the while loop finishes we are guaranteed that
    // our ball is going to move

    // draw the ball in its initial location
    clearScreen();
    drawCharAtPoint(ball, ball_character); // draw ball

    const double time_to_wait = 1.0/10;

    while (true) {
        // wait a little bit
        sleep(time_to_wait);

        // clear the screen
        clearScreen();

        // if we hit a wall, bounce the ball off it
        if ((ball.col == 1 && direction.col == -1) || 
            (ball.col == getTerminalCols() && direction.col == 1)) {
            // invert the col direction
            // this will make the ball move away from the wall
            direction.col = direction.col * -1;
        }

        if ((ball.row == 1 && direction.row == -1) || 
            (ball.row == getTerminalRows() && direction.row == 1)) {
            // invert the row direction
            direction.row = direction.row * -1;
        }

        // move the ball's location in its (possibly new) direction
        ball.row += direction.row;
        ball.col += direction.col;

        // draw the ball in its new location
        drawCharAtPoint(ball, ball_character);
    }

    return 0;
}


