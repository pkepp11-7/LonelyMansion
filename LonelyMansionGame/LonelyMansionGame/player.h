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
	Player(int newMax = 3, int newHitPoints = 3, int newAttackAccuracy = 100, int newHitEvasiveness = 90,
		int newWeaponDamage = 0, string newWeaponName = "short sword");
	~Player() {};
	void setMaxHitPoints(int newMax);
	void setHitPoints(int newHitPoints);
	void setHitEvasiveness(int newHitEvasiveness);
	void setAttackAccuracy(int newAttackAccuracy);
	void setWeaponDamage(int newWeaponDamage);
	void setWeaponName(string newWeaponName);
	int getMaxHitPoints();
	int getHitPoints();
	int getHitEvasiveness();
	int getAttackAccuracy();
	int getWeaponDamage();
	string getWeaponName();
private:
	int maxHitPoints;
	int hitPoints;
	int hitEvasiveness;
	int attackAccuracy;
	int weaponDamage;
	string weaponName;
	
};
