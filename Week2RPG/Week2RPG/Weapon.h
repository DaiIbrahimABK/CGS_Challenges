#pragma once
#include <iostream>
enum struct WeaponsList  { Sword = 1, Axe = 2, Bow = 3 };
class Weapon
{
	WeaponsList m_wChoice;
public:
	Weapon(WeaponsList weaponChoice);
	static std::string GetWeaponName(WeaponsList weaponChoice);
		std::string GetWeaponName();
		int GetWeaponDamage();
	~Weapon();

};

