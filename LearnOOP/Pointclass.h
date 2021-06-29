#pragma once

class Point
{
private:
    int x, y;
    static int pointCount;
    Point();

public:

    Point(const Point&);
    Point(int, int);
    ~Point();

    void setCoord(int x, int y);
    void printCoord();
    static int getCount();
    int getX();
    int getY();
};
