#include "pointFuncs.h"

// sets p's .x, .y, and .z fields with the given arguments
void setPoint(Point &p, double xVal, double yVal, double zVal) 
{
    p.x = xVal;
    p.y = yVal;
    p.z = zVal;
}

void printPoint(Point *p) 
{
    cout << "(" << (*p).x << ", " << p->y << ", " << p->z << ")\n";
}

double distanceToOrigin(Point *p)
{
    return sqrt(pow(p->x, 2) + pow(p->y, 2) + pow(p->z, 2));
}