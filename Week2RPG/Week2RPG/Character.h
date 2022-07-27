#pragma once
#include<iostream>
#include"Weapon.h"
class Character
{
	int m_health;
	//int m_armor;
	Weapon m_weapon;
	bool m_isAlive;
	std::string m_name;
public:
	
	Character(std::string name, WeaponsList weapon);
	std::string GetName();
	Weapon getWeapon(); //create weapon class
//	int getArmor(); //create armor class
	int getHealth();  
	~Character();
};


