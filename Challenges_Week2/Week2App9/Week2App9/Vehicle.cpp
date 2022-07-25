
#include <iostream>
#include "Vehicle.h"
using namespace std;

Vehicle::Vehicle(int year, int miles, string brand)
    :m_year(year)
    ,m_miles(miles)
    ,m_brand(brand)
{

}
void Vehicle::Display()
{
    cout << "Year: " << m_year << endl;
    cout << "Miles: " << m_miles << endl;
    cout << "Brand: " << m_brand << endl;

}

