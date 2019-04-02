// to compile: g++ hello.cpp -o hello
// to run: ./hello

// single-line comment
/*

multi
line
comment!

*/

#include <iostream> // iostream is a library
// it allows me to print out to the screen,
// and also to read from the terminal
// cout is for printing
using namespace std; /* iostream is part of the
C++ standard library. They are usually prefixed with
"std::".
*/

// this function gets "called" first when the
// program is run

// main is a function that returns an integer
int main() {
    // { and } denote the 
    // start and the end of the main function

    // print "Hello, world!" and then a newline

    // 'asdf' is not a string in C++

    // every single statement in C++ MUST
    // end with a semicolon

    // arrows to the left because you're giving
    // information to cout (the screen)
    cout << "Hello, world!" << endl;
    // this is the same as cout << "Hello, world!\n";

    return 0; // this is called an exit code
    // 0 means the program executed successfully
}