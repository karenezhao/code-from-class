#include <iostream>
#include <cstdlib>
#include <cassert>
using namespace std;

int sum(int a, int b); // let pretend that we want to test the sum function

// test-driven development (TDD): write tests before code
void sum_tests() {
    // test that -1 + 1 = 0
    if (sum(-1, 1) != 0) {
        cerr << "test for -1 + 1 = 0 failed!" << endl;
    }
    // test that 2+2 = 4
    assert(sum(2, 2) == 4); // assert(booean expression)
    // test that 0 + 5 = 5
    assert(sum(0, 5) == 5); // this one line is a test that sum(0, 5) actually returns 0
}

int main() {
    sum_tests(); // if we get no errors, sum worked

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}