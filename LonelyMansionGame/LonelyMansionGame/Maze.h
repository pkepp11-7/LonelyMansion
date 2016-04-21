#pragma once
#include <time.h>
#include <cstdlib>
#include <fstream>

using std::fstream;

//adjust maze size here if needed
#define MAZE_SIZE 10
#define FLOORS 3



class Maze
{
private:
	int mMansion[FLOORS][MAZE_SIZE][MAZE_SIZE];
	void placeVictoryRoom(void);
	void placeStairs(void);
public:
	Maze();
};

bool weightedChance(int percentage);