#include<iostream>
#include"Car.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

Car::Car()
{
	//std::cout << "Default constructor!" << endl;
}

Car::Car(int year, int miles, std::string brand)
	
	:m_year(year)
	,m_miles( miles)
	,m_brand(brand)
{
	m_year = year;
	m_miles = miles;
	m_brand = brand;

}

Car::~Car()
{
	//cout << "Destructor" << endl;
}


void Car::Display()
{
	cout << "Brand: " << m_brand << endl;
	cout << "Year: " << m_year << endl;
	cout << "Miles: " << m_miles << endl;
}
void Car::Drive(int miles)
{
	m_miles = m_miles + miles;
}
