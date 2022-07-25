// Week3App1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::string userInput;
    int a = 0;
    int b = 0;
   
    std::cout << "Please enter 2 integers separated by a space: ";
    std::cin >> a>> b;
    int* ptrA = &a;
    int* ptrB = &b;
    std::cout << "ptrA is: " << *ptrA << " ptrB is: " << *ptrB;
}

