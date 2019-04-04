#include <iostream> // cout and cin are available because I included iostream
#include <cstdlib> // I can use atoi because I included this
using namespace std;

// Write a program that calculates the series:  1+ 1/2+ 1/3+ ....1/n, 
// where `n` is specified by the user
// the return type of this function is double
// sum_series takes one integer argument, which is how many terms to sum together
double sum_series(int n) {
    double res = 0.0;
    // this loop will iterate n times
    for (int i = 1; i <= n; i++) {
        // add to res the current term of the series we're working on
        res += 1.0/i;
    }

    // return the final answer from the res variable
    return res;
}

int main(int argc, char *argv[])
{
    cout << argc << endl;
    if (argc != 2) {
        cerr << "usage: " << argv[0] << " n\n";
        exit(1);
    }
    int m = atoi(argv[1]);

    if (m <= 0) {
        cerr << "please enter a positive number" << endl;
        exit(1);
    }

    cout << "sum is: " << sum_series(m) << endl;

    return 0;
}