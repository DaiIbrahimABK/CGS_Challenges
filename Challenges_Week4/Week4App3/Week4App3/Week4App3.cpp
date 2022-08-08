// Week4App3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<thread>
using namespace std;
//static int HeapInt = 0;
bool EndThread = false;
int ThreadVar = 0;
void HelloWorldThread()
{
    while (!EndThread) {
        ThreadVar++;
        if (ThreadVar > 1000)
        {
            ThreadVar = 0;
        }
    }
   // cout << "hello world thread" << endl;
}
int main()
{
   // HeapInt = 5;
    cout << "Hello World!\n";
    char userInput = ' ';
  
    //HelloWorldThread();
    std::thread Hello(HelloWorldThread);

    while (1)
    {
        cout << "press any key to display the count " << endl;
        cin >> userInput;
        cout << "thread var: " << ThreadVar << endl;

    }
  

    Hello.join();
    return 0;
}

