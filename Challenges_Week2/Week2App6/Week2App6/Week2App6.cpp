// Week2App6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

#include"Car.h"

int main()
{
	Car myCar(2018, 35000, "Toyota");
	myCar.Display();
	myCar.Drive(200);
	myCar.Display();
}

