#pragma once
#include "player.h"
#include "room.h"
//adjust maze size here if needed



class Maze
{
private:
	int mMansion[FLOORS][MAZE_SIZE][MAZE_SIZE];
	Coordinate myPos;
	void placeVictoryRoom(void);
	void placeStairs(void);
	void placeRooms(void);
	void getStartPos(void);
public:
	Maze();
};

bool weightedChance(int percentage);