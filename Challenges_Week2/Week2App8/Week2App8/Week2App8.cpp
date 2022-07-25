// Week2App8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
template <typename T>
T Maximum(T a, T b)
{
    return(a > b ? a : b);
}

template <typename T>
class Point
{
public:
    T x;
    T y;
    Point(T x = 0, T y = 0)
        :x(x)
        , y(y)
    {

    }
    T GetlargerCoorinate()
    {
        return(x > y ? x : y);
    }
    T GetSmallerCoorinate()
    {
        return(x < y ? x : y);
    }
};


template <typename T>
class Stack
{
    static const int k_sizeStack = 10;
    T m_data[k_sizeStack];
    int m_top;
public:
    Stack()
        :m_top(-1)
    {
        memset(m_data, 0, sizeof(T) * k_sizeStack);
    }
    void Push(T data)
    {
        ++m_top;
        m_data[m_top];
    }
    T Pop()
    {
        T value = m_data[m_top];
        --m_top;
        return value;
    }
};

int main()
{
    Point<int> p1(10, 5);
    Point<float> p2(4.5f, 4.7f);
    Point<double> p3(12.5, 8.9);

    Stack<int> intStack;
    intStack.Push(10);
    intStack.Push(20);

        
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
