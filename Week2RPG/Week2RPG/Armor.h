#pragma once
#include <iostream>
enum struct ArmorList { Light = 1, Medium = 2, Heavy = 3 };
class Armor
{
	ArmorList m_aChoice;
public:
	Armor(ArmorList armorChoice);
	static std::string GetArmorName(ArmorList armorChoice);
	std::string GetArmorName();
	~Armor();
};


