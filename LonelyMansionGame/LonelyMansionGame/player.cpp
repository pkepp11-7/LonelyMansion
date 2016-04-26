#include "player.h"

Player::Player(int newHitPoints, int newAttackAccuracy, int newHitEvasiveness, int newWeaponDamage, string newWeaponName)
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

void Player::setHitEvasiveness(int newHitEvasiveness)
{
	hitEvasiveness = newHitEvasiveness;
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

int Player::getHitEvasiveness()
{
	return hitEvasiveness;
}

int Player::getWeaponDamage()
{
	return weaponDamage;
}

string Player::getWeaponName()
{
	return weaponName;
}