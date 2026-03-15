#include "Player.h"
#include <iostream>

using namespace std;

Player::Player(string name, int hp, int level, int exp, int gold)
{
	this->name = name;
	this->hp = hp;
	this->level = level;
	this->exp = exp;
	this->gold = gold;
}
string Player::getName() { return name; };
int Player::getHp() { return hp; };
int Player::getMaxHP() { return maxHp; };
int Player::getLevel() { return level; };
int Player::getExp() { return exp; };
int Player::getGold() { return gold; };

void Player::Info() {
	cout << name << " | " << "HP: " << hp << " | " << "Level: " << level << " | " << "Exp: " << exp << " | " << "Gold: " << gold << endl;
}