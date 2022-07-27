#include"CollectPlayerInput.h"
#include "Weapon.h"
#include"Player.h"
#include <iostream>
Player* CollectPlayerInput::CollectPlayerInputs()
{
	std::string playerName;
	playerName = GetPName();
	int playerWeapon;
	playerWeapon = GetWeapon();

	Player* myPlayer = new Player(playerName, WeaponsList(playerWeapon));

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
void CollectPlayerInput::DisplayPlayer(Player nPlayer)
{
	std::cout << "Player name is: " << nPlayer.GetName() << " !!" << std::endl;
	std::cout << "Player weapon is: " << nPlayer.getWeapon().GetWeaponName() << " !!" << std::endl;



}
