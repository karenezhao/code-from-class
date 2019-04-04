#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char *argv[])
{
    // make a random number between 0 and 100 for the user to guess
    srand(time(0));
    int number = rand() % 101;

    // keep asking the user to guess while the guess is too low/high
    // the user has to guess *at least once*
    int guess;
    do {
        cout << "enter your guess: ";
        cin >> guess;

        if (guess < number) {
            cout << "too low!" << endl;
        } else if (guess > number) {
            cout << "too high!" << endl;
        } else {
            // guess == number if we got here
            cout << "you got it!" << endl;
        }

    } while (guess != number);

    return 0;
}