#include <iostream>
#include "convert.h"
using namespace std;

int main(int argc, char *argv[])
{
    // ask the user for a number in decimal and a base to convert it to
    cout << "Enter a number in decimal: ";
    int n, base;
    cin >> n;
    cout << "Enter the base to convert it to (2 to 16): ";
    cin >> base;

    // convert it and display the result
    cout << convert_to_base(n, base) << endl;

    return 0;
}