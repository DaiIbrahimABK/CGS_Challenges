#include "Armor.h"


#include"Armor.h"
#include <iostream>
Armor::Armor(ArmorList ArmorChoice)
	: m_aChoice(ArmorChoice)
{

}

std::string Armor::GetArmorName(ArmorList ArmorChoices)
{

	switch (ArmorChoices)
	{
	case ArmorList::Light:
		return "Light";
	case ArmorList::Medium:
		return "Medium";
	case ArmorList::Heavy:
		return "Heavy";
	default:
		return "no Armors??";
	}
}

std::string Armor::GetArmorName()

{
	return GetArmorName(m_aChoice);
}

Armor::~Armor()
{
}