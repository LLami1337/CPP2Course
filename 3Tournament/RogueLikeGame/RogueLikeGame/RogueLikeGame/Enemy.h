#pragma once
#include <string>
using namespace std;

class Enemy
{

 public:
	Enemy(string name, char tile, int level, int attack, int defense, int health, int xp);
	void setPosition(int x, int y);
	void getPosition(int& x, int& y);
	int attack();
	int takeDamage(int attack);

 private:

	string _name;
	char _tile;

	int _level;
	int _attack;
	int _defense;
	int _health;
	int _experienceValue;

	int _x;
	int _y;
};

