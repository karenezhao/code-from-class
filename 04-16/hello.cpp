#include <iostream>
using namespace std;

// g++ -S hello.cpp makes assembly code
// g++ -c hello.cpp makes object code (hello.o) and doesn't link any libraries
    // it's a compiled version of ONLY this file
// g++ hello.o -o hello compiles and links all libraries used
    // if you had more of your own libraries, you'd say:
    // g++ hello.o lib.o -o hello 
    // this links (brings together) all the code into one
    // runnable piece

int main()
{
    cout << "Hello, world!\n";
    return 0;
}