#pragma once
#include "Item.h"
#include <string>
#include <vector>
using namespace std;
class Player
{
private:
	string name;
	int hp, maxHp, level, exp, gold, shield, attack;
	Item equipped;
	//vector<*Item> inventory;
public:                                       
	Player(string, int hp = 100, int level = 1, int exp = 0, int gold = 100, int attack = 10, int shield = 3);
	string getName();
	int getHp();
	int getMaxHP();
	int getLevel();
	int getExp();
	int getGold();
	int getshield();
	int getAttack();


	void Info();
	void Info_combat();
	void takeDamage(int);
};

