#pragma once
#include <time.h>
#include <cstdlib>

//adjust maze size here if needed
#define MAZE_SIZE 10
#define FLOORS 3



class Maze
{
private:
	int mMansion[FLOORS][MAZE_SIZE][MAZE_SIZE];
public:
	Maze();
};

bool weightedAverage(int percentage);