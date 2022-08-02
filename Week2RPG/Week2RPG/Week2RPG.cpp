// Week2RPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Player.h";
#include "Encounter.h"
#include "Enemy.h"
#include "CollectPlayerInput.h"
int main()
{
    Player* myPlayerPtr= CollectPlayerInput().CollectPlayerInputs();
    Enemy enemy = Enemy();
    Encounter encounter = Encounter(myPlayerPtr, &enemy);
    encounter.PlayMatch();
    std::cout << "Hello World!\n";
}
