#pragma once
class Character {
protected:
	float m_health;
	int m_xPosition;
	int m_yPosition;
	bool m_isAlive;

public:
	Character(float health, int x, int y);
	void Move(int x, int y);
	void TakeDamage(float damage);
	virtual void Draw()=0;
};