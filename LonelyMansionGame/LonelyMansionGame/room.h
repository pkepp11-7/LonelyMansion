#pragma once

#include "player.h"
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

// The three lines below are needed for audio playback.
#include <Windows.h>
#include "MMSystem.h"
#pragma comment(lib,"Winmm.lib")

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::ostream;
using std::istream;
using std::fstream;
using std::ifstream;
using std::ofstream;
using std::string;
using std::to_string;

class Player
{
public:
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

class Room
{
public:
	Room(int *newRoomType, Player *newPlayer);
private:
	void stairRoom();
	void finishRoom();
	void empty();
	void suhDude();
	void donaldTrump();
	void monsterLevel1();
	void monsterLevel2();
	void monsterLevel3();
	void monsterLevel4();
	void monsterLevel5();
	void monsterLevel6();
	void weaponLevel1();
	void weaponLevel2();
	void weaponLevel3();
	void healthRoom();
	void HPRoom();
	void attackSpeedRoom();
	void johnCena();
	int **roomType;
	Player **p1;
};
