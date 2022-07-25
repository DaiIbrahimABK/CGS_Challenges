// Week2App5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void fillArray(int arr[], int arrSize);
int getMax(int arr[], int arrSize);

int main()
{
	const int arrSize = 5;
	int arr[arrSize] = {};

	fillArray(arr, arrSize);
	cout << "The largest value of the array is: " << getMax(arr, arrSize) << endl;
}
void fillArray(int arr[], int arrSize)
{
	cout << "enter values to fill the array below" << endl;
	for (int i = 0; i < arrSize; i++)
	{
		cout << "index " << i << ": ";
		cin >> arr[i];
	}

}
int getMax(int arr[], int arrSize)
{
	int maxValue = arr[0];
	for (int i = 1; i < arrSize; i++)
	{
		if (arr[i] > maxValue)
		{
			maxValue = arr[i];
		}
	}
	return maxValue;

}