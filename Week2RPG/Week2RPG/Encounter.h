#pragma once
#include"Player.h"
#include "Enemy.h"
class Encounter
{
	Player* m_newPlayerPtr;
	Enemy* m_newEnemyPtr;
	void Match();
	void DisplayPlayerHealth();

public:
	Encounter(Player* newPlayerPtr, Enemy* newEnemyPtr);

	void PlayMatch();

};

