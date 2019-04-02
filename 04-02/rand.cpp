// to compile: g++ -o rand rand.cpp
// to run: ./rand

#include <iostream> // gives me cout
#include <cstdlib> // gives me rand
#include <ctime> // this gives me time
using namespace std;

int main() {
    // I can seed the random number generator
    // with some changing value to get a different
    srand(time(0));
    // random number each time the program runs
    // pseudo-random
    // random # between 0 and 10
    cout << rand() % 11 << endl; 
    // random # between 2 and 10 
    cout << rand() % 9 + 2 << endl;

    return 0;
}