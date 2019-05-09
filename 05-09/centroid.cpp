#include <iostream>
using namespace std;

struct Point {
    double x;
    double y;
};


// Point *arr ≡ Point arr[]
Point* centroid(const Point *arr, int size) {
    Point *ret = new Point;
    (*ret).x = 0;
    ret->y = 0;

    // average all the points
    for (int i = 0; i < size; i++) {
        ret->x += arr[i].x;
        ret->y += arr[i].y;
    }

    ret->x = ret->x / size;
    ret->y = ret->y / size;

    return ret;
}

int main(int argc, char *argv[])
{
    Point points[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};

    Point *c = centroid(points, 4); // c is a new Point on the heap

    cout << "centroid is: (" << c->x << ", " << c->y << ")" << endl;

    delete c;

    return 0;
}