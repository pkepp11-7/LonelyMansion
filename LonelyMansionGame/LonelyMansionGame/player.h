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
	Player(int newHitPoints = 3, int newAttackAccuracy = 100, int newWeaponDamage = 0, string newWeaponName = "short sword");
	~Player() {};
	void setHitPoints(int newHitPoints);
	void setHitEvasiveness(int newHitEvasiveness);
	void setAttackAccuracy(int newAttackAccuracy);
	void setWeaponDamage(int newWeaponDamage);
	void setWeaponName(string newWeaponName);
	int getHitPoints();
	int getHitEvasiveness();
	int getAttackAccuracy();
	int getWeaponDamage();
	string getWeaponName();
private:
	int hitPoints;
	int hitEvasiveness;
	int attackAccuracy;
	int weaponDamage;
	string weaponName;
};
