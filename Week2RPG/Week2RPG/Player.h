#pragma once
#include <iostream>
using std::string;
#include"Character.h"

class Player: public Character
{
protected:
	string playerName;

public:
	//Player();
	Player(string name, WeaponsList weapon, ArmorList armor);
	int GetDamage() override;
	~Player();
};