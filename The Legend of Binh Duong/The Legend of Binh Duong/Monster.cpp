#include "Monster.h"
#include <iostream>
using namespace std;

Monster::Monster(string n, int h, int mh, int a, int e, int g) {
	name = n;
	hp = h;
	maxhp = mh;
	attack = a;
	exp = e;
	gold = g;
}