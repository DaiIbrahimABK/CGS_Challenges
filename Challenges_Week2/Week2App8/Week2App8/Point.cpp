#include<iostream>
#include"Point.h"
template <typename T>
Point<T>::Point(T x, T y)
    :x(x)
    , y(y)
{

}
    template <typename T>
    T Point<T>::GetlargerCoorinate()
    {
        return(x > y ? x : y);
    }
    template <typename T>
    T Point<T>::GetSmallerCoorinate()
    {
        return(x < y ? x : y);
    }
