#pragma once
#include <string>
using namespace std;
class Monster
{
private:
	string name;
	int hp, maxhp, attack, exp, gold,shield;
public:
	Monster(string , int , int , int , int , int , int);
	string getName();
	int getHp();
	int getMaxHp();
	int getAttack();
	int getExp();
	int getGold();
	int getshield();

	void takeDamage(int);
	void Info();
	void Info_combat();

};

