#pragma once
#include <string>
using namespace std;
class Monster
{
private:
	string name;
	int hp, maxhp, attack, exp, gold;
public:
	Monster(string n, int h, int mh, int a, int e, int g);
	void getNam();
	void getHp();
	void getMaxHp();
	void getAttack();
	void getExp();
	void getGold();
	void getDamage();
};

