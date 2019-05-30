#include <iostream>
#include <cmath>
using namespace std;

bool equals(double x, double y, double tolerance=1e-9) {
    return (abs(x - y) < tolerance);
}

double sqrt(double x) {
    double low_guess = 0;
    double high_guess = max(1.0, x);

    // keep on guess until our guess are really close to the answer
    // always guess in the middle
    double guess = (low_guess + high_guess) / 2.0;
    // keep on guessing until guess^2 = x
    while (!equals(guess*guess, x)) {
        // check whether our guess was too low or too high
        if (guess * guess < x) {
            // we guessed too low
            // update our low_guess
            low_guess = guess;
        } else {
            // we guessed too high (or possibly the right answer)
            // update our high_guess
            high_guess = guess;
        }
        // make a more educated guess
        guess = (low_guess + high_guess) / 2.0;
    }

    return guess;
}

int main(int argc, char *argv[])
{
    cout << sqrt(2) << endl;
    cout << sqrt(0.5) << endl;

    return 0;
}