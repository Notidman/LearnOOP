#include "PointClass.h"
#include <iostream>
#include "constLib.h"

void Point::setCoord(int x, int y)
{
    if (x >= -MAX_COORD && x <= MAX_COORD) this->x = x;
    if (y >= -MAX_COORD && y <= MAX_COORD) this->y = y;
}

int Point::getX()
{
    if (x >= -MAX_COORD && x <= MAX_COORD)
        return x;
    else
        return 0;
}

int Point::getY()
{
    if (y >= -MAX_COORD && y <= MAX_COORD)
        return y;
    else
        return 0;
}

void Point::printCoord()
{
    std::cout << "X: " << x << " Y: " << y << std::endl;
}

Point::Point(int x, int y) : x(x), y(y)
{
    pointCount++;
}

Point::~Point()
{
    //std::cout << "Object destructor call " << this << std::endl;
}

Point::Point(const Point& a) : x(a.x), y(a.y)
{
    //std::cout << "constructor copy " << this << std::endl;
}

int Point::getCount()
{
    return pointCount;
}

int Point::pointCount = 0;