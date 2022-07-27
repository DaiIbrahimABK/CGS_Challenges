// Week2App4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool isInputValid(int number);
void factors(int number);
int main()
{
	int userInput = 1;
	
	do
	{
		if (!isInputValid(userInput))
		{
			cout << "The number is invalid." << endl;
		}
		cout << "please enter a positive number to find the factorials: ";
		cin >> userInput;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(100, '\n');
			cout << "The number is invalid, please enter a positive number" << endl;
			cin >> userInput;
		}
		
	}while (!isInputValid(userInput));
	factors(userInput);
}
bool isInputValid(int number)
{
	if (number > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void factors(int number)
{
	for (int i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			cout << i << " ";
		}
	
	}

	

}
