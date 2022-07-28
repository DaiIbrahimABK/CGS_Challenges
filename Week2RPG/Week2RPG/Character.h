#pragma once
#include<iostream>
#include"Weapon.h"
#include "Armor.h"
class Character
{
	int m_health;
	Armor m_armor;
	Weapon m_weapon;
	bool m_isAlive;
	std::string m_name;
public:
	
	Character(std::string name, WeaponsList weapon, ArmorList armor);
	std::string GetName();
	Weapon getWeapon(); //create weapon class
    Armor getArmor(); //create armor class
	int getHealth();  
	~Character();
};


