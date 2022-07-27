#pragma once


template <typename T>
class Point
{
protected:
    T x;
    T y;
public:

    Point(T x, T y);
    T GetlargerCoorinate();
    T GetSmallerCoorinate();
};
