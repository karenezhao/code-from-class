#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i =10;
    double sum = 1/i; // performs integer division

    // if either side of that / had a double on it, then it would have done what we expected

    cout << sum << endl;

    cout << 1.0/i << endl;

    cout << 1/static_cast<double>(i) << endl;

    return 0;
}