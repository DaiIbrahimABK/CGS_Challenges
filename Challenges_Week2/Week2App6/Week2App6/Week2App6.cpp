// Week2App6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;


class Car 
{

	int m_year;
	int m_miles;
	string m_brand;
public:
	Car()
	{
		cout << "Default constructor!" << endl;
	}
	Car(int year, int miles, string brand)
	{
		m_year = year;
		m_miles = miles;
		m_brand = brand;
	}
	~Car()
	{
		cout << "Destructor" << endl;
	}


	void Display()
	{
		cout << "Brand: " << m_brand << endl;
		cout << "Year: " << m_year << endl;
		cout << "Miles: " << m_miles << endl;
	}
	void Drive(int miles)
	{
		m_miles = m_miles + miles;
	}

};
int main()
{
	Car myCar(2018, 35000, "Toyota");
	myCar.Display();
	myCar.Drive(200);
	myCar.Display();
}

