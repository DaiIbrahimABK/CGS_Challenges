// Week2App7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Player.h"
#include "Enemy.h"

int main()
{
    Player myPlayer = Player(100, 1, 1);
    Enemy myEnemy = Enemy(50, 4, 4, 3.0f);

    myPlayer.Draw();
    myEnemy.Draw();
}