#pragma once
#include<iostream>
using std::string;
enum struct WeaponsList = { Sword = 1, Axe = 2, Bow = 3 };
class Weapon
{
	WeaponList m_wChoice;
public:
	Weapon(WeaponsList weaponChoice);
	static string GetWeaponName(WeaponsList weaponChoice)
		string GetWeaponName();
	~Weapon();

};

