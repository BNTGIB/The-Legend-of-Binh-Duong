#include "Player.h"
#include <iostream>

using namespace std;

Player::Player( string name = "Player", int hp , int level, int exp , int gold , int attack , int shield )
{
	this->name = name;
	this->hp = hp;
	this->maxHp = hp;
	this->level = level;
	this->attack = attack;
	this->shield = shield;
	this->exp = exp;
	this->gold = gold;
}
string Player::getName() { return name; };
int Player::getHp() { return hp; };
int Player::getMaxHP() { return maxHp; };
int Player::getLevel() { return level; };
int Player::getExp() { return exp; };
int Player::getGold() { return gold; };
int Player::getshield() { return shield; }
int Player::getAttack() { return attack; }


void Player::Info() {
	cout << name << " | " << "HP: " << hp << " | " << "Level: " << level << " | " << "Exp: " << exp << " | " << "Gold: " << gold << endl;
}
void Player::Info_combat() {
	cout << name << " | " << "HP: " << hp;
}
void Player::takeDamage(int dam) {
	cout << name << " : ( -" << dam << "HP)\n";
	hp -= dam;
}