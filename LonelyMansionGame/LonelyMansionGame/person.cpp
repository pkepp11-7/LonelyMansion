#include "person.h"

Player::Player(int newHitPoints = 3, double newAttackAccuracy = 1.0, int newWeaponDamage = 0, string newWeaponName = "short sword")
{
	hitPoints = newHitPoints;
	attackAccuracy = newAttackAccuracy;
	weaponDamage = newWeaponDamage;
	weaponName = newWeaponName;
	
}

void Player::setHitPoints(int newHitPoints)
{
	hitPoints = newHitPoints;
}

void Player::setAttackAccuracy(int newAttackAccuracy)
{
	attackAccuracy = newAttackAccuracy;
}

void Player::setWeaponDamage(int newWeaponDamage)
{
	weaponDamage = newWeaponDamage;
}

void Player::setWeaponName(string newWeaponName)
{
	weaponName = newWeaponName;
}

int Player::getHitPoints()
{
	return hitPoints;
}

int Player::getAttackAccuracy()
{
	return attackAccuracy;
}

int Player::getWeaponDamage()
{
	return weaponDamage;
}

string Player::getWeaponName()
{
	return weaponName;
}