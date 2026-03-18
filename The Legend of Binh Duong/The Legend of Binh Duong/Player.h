#pragma once
#include "Item.h"
#include <string>
#include <vector>
using namespace std;
class Player
{
private:
	string name;
	int hp, maxHp, level, exp, gold;
	Item equipped;
	vector<*Item> inventory;
public:                                       
	Player(string name = "Player", int hp = 100, int level = 1, int exp = 0, int gold = 100);
	string getName();
	int getHp();
	int getMaxHP();
	int getLevel();
	int getExp();
	int getGold();

	void Info();
};

