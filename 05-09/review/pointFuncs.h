#ifndef POINTFUNCS_H
#define POINTFUNCS_H

#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

void setPoint(Point &p, double xVal, double yVal, double zVal);
void printPoint(Point *p);
double distanceToOrigin(Point *p);

#endif