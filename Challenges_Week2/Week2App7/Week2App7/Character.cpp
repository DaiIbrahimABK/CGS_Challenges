#include "Character.h"
#include<iostream>

Character::Character(float health, int x, int y)
	:m_health(health)
	, m_xPosition(x)
	, m_yPosition(y)
	, m_isAlive(false)
{

}
void Character::Move(int x, int y)
{
	m_xPosition += x;
	m_yPosition += y;
}
void Character::TakeDamage(float damage)
{
	if (m_isAlive)
	{
		m_health -= damage;
		if (m_health <= 0)
		{
			m_health = 0;
			m_isAlive = false;
		}
	}
}

