
#include "Player.h"
#include<iostream>


	Player::Player(float health, int x, int y)
		:Character(health, x, y)
		, m_HasKey(false)
	{

	}
	void Player::Draw() 
	{
		std::cout << "@";
	}
	void Player::UseHealth(float health)
	{
		m_health += health;
		if (!m_isAlive)
		{
			m_isAlive = true;
		}
	}
	void Player::PickUpKey()

	{
		m_HasKey = true;
	}
