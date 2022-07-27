// Week2RPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h";
#include "CollectPlayerInput.h"
int main()
{
    Player* myPlayerPtr= CollectPlayerInput().CollectPlayerInputs();
    std::cout << "Hello World!\n";
}
