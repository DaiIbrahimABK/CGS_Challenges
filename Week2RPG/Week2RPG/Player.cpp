#include <iostream>

#include "Player.h"
//using std::string;
using std::cout;
using std::cin;
using std::endl;

Player::Player(string name, WeaponsList weapon, ArmorList armor)
	:Character(name, weapon, armor)
{

	//string playerName;

	//cout << "what is your name, brave soldier?" << endl;
	//cin >> playerName;
	//
	//int weapon;
	//cout << "Choose your weapon of choice: enter 1 for sword, 2 for axe, 3 for bow: " << endl;
	//cin >> weapon;
	//int armor;
	//cout << "Choose your armor: enter 1 for light, 2 for medium, and 3 for heavy: " << endl;
	//cin >> armor;


	
}
int Player::GetDamage()
{

		int damage = getWeapon().GetWeaponDamage();
		return damage >= 1 ? damage - 1 : 0;
	
}
Player::~Player(){

}