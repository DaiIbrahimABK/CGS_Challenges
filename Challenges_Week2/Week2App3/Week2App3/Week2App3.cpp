// Week2App3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isLeapYear(int year);
int main()
{
	int year = 0;
	cout << "please enter a year: ";
	cin >> year;
	if (isLeapYear(year))
	{
		cout << year << " is a leap year"<<endl;
	}
	else
	{
		cout << year << " is not a leap year" << endl;
	}
}

bool isLeapYear(int year)
{
	if (year%400==0)
	{
		return true;
	}
	else if (year % 100 == 0)
	{
		return false;
	}
	else if (year % 4 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
