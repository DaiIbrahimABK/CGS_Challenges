#include "Encounter.h"



Encounter::Encounter(Player* newPlayerPtr, Enemy* newEnemyPtr)
 :m_newPlayerPtr(newPlayerPtr)
	,m_newEnemyPtr(newEnemyPtr)
{

}
void Encounter::Match()

{
	int playerDamage = m_newPlayerPtr->GetDamage();

}
void Encounter::DisplayPlayerHealth()
{

}
void Encounter::PlayMatch()
{
	std::cout << m_newPlayerPtr->GetName() << " must fight " << m_newEnemyPtr->GetName() << " their weapon of choice is: " << m_newEnemyPtr->getWeapon().GetWeaponName() << " their armor is " << m_newEnemyPtr->getArmor().GetArmorName() << std::endl;
	DisplayPlayerHealth();
	Match();

}



