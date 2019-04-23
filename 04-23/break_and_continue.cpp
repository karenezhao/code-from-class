#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int i = 1;
    while (i <= 100) {
        // the `continue` keyword tell the loop
        // to keep going to the next iteration
        if (i % 2 == 1) {
            i++;
            continue;
        }

        cout << i << endl;
        i++;

        // the `break` keyword stops the "closest" loop
        if (i == 51) {
            break;
        }
    }

    return 0;
}