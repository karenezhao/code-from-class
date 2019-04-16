#include <iostream>
#include "tdd.h"
#include "shapes.h"

// g++ -c shapes.cpp makes shapes.o
// g++ -c tdd.cpp makes tdd.o
// g++ -c testShapes.cpp makes testShapes.o
// g++ shapes.o tdd.o testShapes.o -o testShapes brings all the programs together
    // into a program called testShapes

void runTests() {
    // test that input of -1 returns empty string
    assertEquals("", drawTriangle(-1), "drawTriangle(-1) == \"\"");

    // test that input of 3 returns " * \n***\n"
    assertEquals(" * \n***\n", drawTriangle(3), "drawTriangle(3)");

    // test that input of 4 returns ""
    assertEquals("", drawTriangle(4), "drawTriangle(4) == \"\"");

    // test that input of 5 returns:
    /* (_ represents ' ')
        __*__\n
        _***_\n
        *****\n
    */
    assertEquals("  *  \n *** \n*****\n", drawTriangle(5), "drawTriangle(5)");
}

int main(int argc, char const *argv[])
{
    // run the tests
    runTests();

    // cout << drawTriangle(11);
    
    return 0;
}