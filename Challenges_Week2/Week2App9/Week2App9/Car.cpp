#include<iostream>
#include"Vehicle.h"
#include"Car.h"
using namespace std;
Car::Car(int year, int miles, string brand)
	:Vehicle(year, miles, brand)
{

}
void Car::Drive(int miles)
{
	m_miles += (miles+ 50);
	cout << "The car is drinving now!!" << endl;
}