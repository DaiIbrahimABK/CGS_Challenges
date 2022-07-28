#include"CollectPlayerInput.h"
#include "Weapon.h"
#include "Armor.h"
#include"Player.h"
#include <iostream>
Player* CollectPlayerInput::CollectPlayerInputs()
{
	std::string playerName;
	playerName = GetPName();
	int playerWeapon = 1;
	int playerArmor = 1;
	playerWeapon = GetWeapon();
	playerArmor = GetArmor();

	Player* myPlayer = new Player(playerName, WeaponsList(playerWeapon), ArmorList(playerArmor));

	DisplayPlayer(*myPlayer);

	return myPlayer;

}

//Player CollectPlayerInput::GetPlayerInfo()
//{
//
//}

std::string CollectPlayerInput::GetPName()
{
	std::string name;
	std::cout << "what is your name??: ";
	std::cin >> name;
	return name;
}
int CollectPlayerInput::GetWeapon()
{
	int weaponOfChoice = 0;
	std::cout << "what is your weapon of choice? enter 1 for sword, 2 for axe and 3 for bow ";
	std::cin >> weaponOfChoice;
	return weaponOfChoice;

}
int CollectPlayerInput::GetArmor()
{
	int armorOfChoice = 0;
	std::cout << "what is your armor of choice? enter 1 for light, 2 for medium and 3 for heavy ";
	std::cin >> armorOfChoice;
	return armorOfChoice;
}
void CollectPlayerInput::DisplayPlayer(Player nPlayer)
{
	std::cout << "Player name is: " << nPlayer.GetName() << " !!" << std::endl;
	std::cout << "Player weapon is: " << nPlayer.getWeapon().GetWeaponName() << " !!" << std::endl;
	std::cout << "Player armor is: " << nPlayer.getArmor().GetArmorName() << " !!" << std::endl;



}
