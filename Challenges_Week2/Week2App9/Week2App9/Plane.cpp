#include<iostream>
#include"Vehicle.h"
#include"Plane.h"
using namespace std;
Plane::Plane(int year, int miles, string brand)
	:Vehicle(year, miles, brand)
{

}
void Plane::Drive(int miles)
{
	m_miles += (miles + 5000);
	cout << "The plane is flying now!!" << endl;
}