// Week2App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3=0;
    int sum=0;
    float avg=0.0f;


    cout << "Please enter 3 numbers sparated by space: ";
    cin >> num1 >> num2 >> num3;
    sum = num1 + num2 + num3;
    avg = sum / 3.0f;

    cout << "the sum is: " << sum << endl<<"the average is: "<<avg<<endl;
}
