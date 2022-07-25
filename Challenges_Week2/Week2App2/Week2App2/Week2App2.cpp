// Week2App2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int cubing(int num);
int main()
{
	int num=0;
	cout << "enter a number to be cubed: " << endl;
	cin >> num;
	cout << "the cube of this number is: " << cubing(num) << endl;
}

int cubing(int num)
{
	return num * num * num;
}