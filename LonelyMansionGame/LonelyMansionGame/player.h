#pragma once

#include <iostream>
#include <string>
#include <time.h>
#include <cstdlib>
#include <fstream>

using std::fstream;
using std::cout;
using std::cin;
using std::endl;
using std::string;

#define MAZE_SIZE 10
#define FLOORS 3
#define ROOMS 50

typedef struct coordinate
{
	int x;
	int y;
	int z;
}Coordinate;

class Player
{
public:
	Player(int newHitPoints = 3, int newAttackAccuracy = 100, int newWeaponDamage = 0, string newWeaponName = "short sword");
	~Player() {};
	void setHitPoints(int newHitPoints);
	void setAttackAccuracy(int newAttackAccuracy);
	void setWeaponDamage(int newWeaponDamage);
	void setWeaponName(string newWeaponName);
	int getHitPoints();
	int getAttackAccuracy();
	int getWeaponDamage();
	string getWeaponName();
private:
	int hitPoints;
	int attackAccuracy;
	int weaponDamage;
	string weaponName;
	
};
