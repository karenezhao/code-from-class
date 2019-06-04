#include <iostream>
using namespace std;

/*

to negate a two's complement number,
first invert the bits using ~, and then
add 1

*/

int negate_bitwise(int x) {
    // return -x; // <-- this is cheating
    return ~x + 1;
}

int main(int argc, char *argv[])
{
    cout << negate_bitwise(5) << endl;
    cout << negate_bitwise(-42) << endl;

    return 0;
}