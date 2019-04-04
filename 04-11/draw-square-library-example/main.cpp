#include <iostream> // now I can use cout
#include <cstdlib> // now I can use exit
// you use <...> for system libraries

#include "drawSquare.h" // now the compiler knows about the drawSquare function
// you use "..." for your own libraries that exist in the same folder

// to compile this big program, we say `g++ main.cpp drawSquare.cpp -o drawSquare`

using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cerr << "usage: " << argv[0] << " n\n";
        exit(1);
    }

    int n = atoi(argv[1]);
    drawSquare(n);

    return 0;
}
