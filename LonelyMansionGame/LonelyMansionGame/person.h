#pragma once

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Player
{
public:
	Player(int newHitPoints = 3, double newAttackAccuracy = 1.0, int newWeaponDamage = 0, string newWeaponName = "short sword");
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
	double attackAccuracy;
	int weaponDamage;
	string weaponName;
};
