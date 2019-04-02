// g++ types.cpp -o types

#include <iostream> // iostream is a library
#include <string> // now I can do cool string stuff!
using namespace std;

// main is a function that returns an integer
int main() {
    // declare a variable called x with value 42
    int x = 42; // type of x is int, and it holds 42
    bool b = true;
    string s = "hi!";
    char c = 'c'; // char holds single characters
    double d = 3.1415926535;

    cout << x << endl;
    cout << b << "\n";
    cout << s << "\n";
    cout << c << endl;
    cout << d << "\n";

    x = 43; // you only have to declare variables once
    cout << x << endl;

    int y; // just declare---holds random garbage 
           // value right now
    cout << y << endl; // this could hold anything
    y = 12;
    cout << y << endl;
    y += 1; // adds one to y (equivalent to y = y + 1)
    y++; // also adds one to y (same as above)
    cout << y << endl;

    // I can convert (cast) values to "similar" types
    // static_cast<target type>(variable name)
    cout << static_cast<int>(d) << endl; // prints 3
    cout << static_cast<bool>(y) << endl;
    // any non-zero integer is true, 0 is false

    d = 3.7;
    cout << static_cast<int>(d) << endl; // doesn't round

    return 0; // this is called an exit code
}