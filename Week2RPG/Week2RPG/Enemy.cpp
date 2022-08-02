#include "Enemy.h"
 
Enemy::Enemy()
:Character("beast", (WeaponsList)(rand() % 4), (ArmorList)(rand() % 4) )
{

}
int Enemy::GetDamage()

{
	int damage = getWeapon().GetWeaponDamage();
	return damage >= 1 ? damage - 1 : 0;

}
