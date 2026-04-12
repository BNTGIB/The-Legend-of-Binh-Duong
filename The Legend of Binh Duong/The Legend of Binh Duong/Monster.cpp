#include "Monster.h"
#include <iostream>
using namespace std;

Monster::Monster(string n, int h, int mh, int a, int e, int g, int sh) {
	name = n;
	hp = h;
	maxhp = mh;
	attack = a;
	exp = e;
	gold = g;
	shield = sh;
}

string Monster::getName() { return name; }
int Monster::getHp() { return hp; }
int Monster::getMaxHp() { return maxhp; }
int Monster::getAttack() { return attack; }
int Monster::getExp() { return exp; }
int Monster::getGold() { return gold; }
int Monster::getshield() { return shield; }


void Monster::takeDamage(int dam) {
	cout << name << " : ( -" << dam << "HP)\n";
	hp -= dam;
}
void Monster::Info() {
	cout << name << " | " << "HP: " << hp << " | " << "Exp: " << exp << " | " << "Gold: " << gold << endl;
}
void Monster::Info_combat() {
	cout << name << " | " << "HP: " << hp;
}