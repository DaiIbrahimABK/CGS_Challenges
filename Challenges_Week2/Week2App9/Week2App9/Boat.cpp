#include<iostream>
#include"Vehicle.h"
#include"Boat.h"
using namespace std;
Boat::Boat(int year, int miles, string brand)
	:Vehicle(year, miles, brand)
{

}
void Boat::Drive(int miles)
{
	m_miles += (miles + 500);
	cout << "the boat is cruising now!!" << endl;
}