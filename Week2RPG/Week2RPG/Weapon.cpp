#include"Weapon.h"
#include <iostream>
Weapon::Weapon(WeaponsList weaponChoice)
	: m_wChoice(weaponChoice)
{

}

std::string Weapon::GetWeaponName(WeaponsList weaponChoices)
{

	switch (weaponChoices)
	{
	case WeaponsList::Sword:
		return "Sword";
	case WeaponsList::Axe:
		return "Axe";
	case WeaponsList::Bow:
		return "Bow";
	default:
		return "no weapons??";
	}
}
int Weapon::GetWeaponDamage( )
{

	switch (m_wChoice)
	{
	case WeaponsList::Sword:
		return 10;
	case WeaponsList::Axe:
		return 20;
	case WeaponsList::Bow:
		return 30;
	default:
		return 7;
	}
}

std::string Weapon::GetWeaponName()

{
	return GetWeaponName(m_wChoice);
}

Weapon::~Weapon()
{
}