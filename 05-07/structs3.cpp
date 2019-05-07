#include <iostream>
using namespace std;

// a struct is short for "structure" or "data structure"
// it's a way to combine a bunch of types into one logical
// package
struct Point {
     double x; //member variable of Point
     double y; //member variable of Point
}; // <- watch out for this semicolon

// Point is now a new type that we can use
// it is made up of "smaller" types

void printPoint(Point *ptr) {
    cout << "(" << (*ptr).x << ", " << ptr->y << ")\n";
}

void initPoint(Point &ref, double xVal, double yVal) {
    ref.x = xVal;
    ref.y = yVal;
}

int main(int argc, char *argv[])
{
    Point p; 
    initPoint(p, 1.0, 2.0);

    printPoint(&p); // call-by-pointer

    return 0;
}