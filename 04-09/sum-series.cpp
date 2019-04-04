#include <iostream>
#include <cstdlib>
using namespace std;

// Write a program that calculates the series:  1+ 1/2+ 1/3+ ....1/n, 
// where `n` is specified by the user

int main(int argc, char const *argv[])
{
    int n;
    cout << "enter n: ";
    cin >> n;

    if (n <= 0) {
        cerr << "please enter a positive number" << endl;
        exit(1);
    }

    // Write a program that calculates the series:  1+ 1/2+ 1/3+ ....1/n, 
    // where `n` is specified by the user
    double res = 0.0;
    // this loop will iterate n times
    for (int i = 1; i <= n; i++) {
        // add to res the current term of the series we're working on
        res += 1.0/i;
    }

    cout << "sum is: " << res << endl;

    return 0;
}