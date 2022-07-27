#include"Character.h"
#include <iostream>
Character::Character(std::string name, WeaponsList weapon)
	: m_health(100)
	, m_weapon(weapon)
	//, m_armor(armor)
	, m_isAlive(true)
	,m_name(name)
{

}

std::string Character::GetName()
{
	return m_name;
}

Weapon Character::getWeapon()
{
	return m_weapon;
}
Character::~Character()
{
}