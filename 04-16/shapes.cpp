#include "shapes.h" // this will copy and paste shapes.h into this file

string drawTriangle(int n) {
    // the width should always be odd
    // if it's not (or negative), 
    // we'll return the empty string
    if (n % 2 == 0 || n < 0) {
        return "";
    }

    // otherwise, we're still in this function
    // we can assume if we got here that
    // n is a valid input

    // figure out how many lines we need to output
    int number_of_lines = (n + 1) / 2;

    string result = "";

    int number_of_stars_on_current_line = 1;
    // i keeps track of which line we're on
    for (int i = 0; i < number_of_lines; i++) {
        // for this line, add out the stars
        int number_of_spaces = 
                n - number_of_stars_on_current_line;

        // add number_of_spaces / 2 " "s
        for (int j = 1; j <= number_of_spaces / 2; j++) {
            result += ' ';
        }

        // add number_of_stars_on_current_line "*"s
        for (int j = 1; j <= number_of_stars_on_current_line; j++) {
            result += '*';
        }

        // add number_of_spaces / 2 " "s
        for (int j = 1; j <= number_of_spaces / 2; j++) {
            result += ' ';
        }

        // end the line
        result += '\n';

        // increment number_of_stars_on_current_line
        number_of_stars_on_current_line += 2;
    }

    // give back the answer
    return result;
}