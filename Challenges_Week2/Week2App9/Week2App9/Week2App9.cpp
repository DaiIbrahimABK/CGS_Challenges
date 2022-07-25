// Week2App9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include"Car.h"
#include"Boat.h"
#include"Plane.h"
int main()
{
    Car myCar(2018, 500, "toyota");
    Plane myPlane(2020, 5000, "Boeing 787 Dreamliner");
    Boat myBoat(2008, 2000, "SS Cruiser");

    myCar.Display();
    myCar.Drive(600);
    myCar.Display();

    myPlane.Display();
    myPlane.Drive(600);
    myPlane.Display();

    myBoat.Display();
    myBoat.Drive(600);
    myBoat.Display();


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
