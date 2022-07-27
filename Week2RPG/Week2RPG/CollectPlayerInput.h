#pragma once
#include "Player.h"
#include <iostream>
class CollectPlayerInput
{
public:
	Player* CollectPlayerInputs();
	//~CollectPlayerInput();
//	Player CollectPlayerInfo()
	std::string GetPName();
	int GetWeapon();
	void DisplayPlayer(Player nPlayer);


private:

};

