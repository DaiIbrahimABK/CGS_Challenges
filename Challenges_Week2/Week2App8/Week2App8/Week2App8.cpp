// Week2App8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Point.h"
#include"Point.cpp"
using namespace std;
template <typename T>
T Maximum(T a, T b)
{
    return(a > b ? a : b);
}




int main()
{
    Point<int> p1(10, 5);
    Point<float> p2(4.5f, 4.7f);
    Point<double> p3(12.5, 8.9);


        
   cout<<"The max of two int type using template " << Maximum(12, 3) << endl;
   cout << "The max of two float type using template " << Maximum(2.6f, 53.5f) << endl;
   cout <<"The max of two double type using template "<<Maximum(100.55, 34.6) << endl;


   cout << "The max of two int type using class point template " << p1.GetlargerCoorinate() << endl;
   cout << "The min of two int type using class point template " << p1.GetSmallerCoorinate()<< endl;
  
   cout << "The max of two float type using class point template " << p2.GetlargerCoorinate() << endl;
   cout << "The min of two float type using class point template " << p2.GetSmallerCoorinate() << endl;

   cout << "The max of two double type using class point template " << p3.GetlargerCoorinate() << endl;
   cout << "The min of two double type using class point template " << p3.GetSmallerCoorinate() << endl;

}

