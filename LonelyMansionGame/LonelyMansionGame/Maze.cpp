#include "Maze.h"

Maze::Maze()
{
	fstream infile("Maze Floor Plans.txt");
	int i, j, k;
	for (i = 0; i < FLOORS; i++)
	{
		for (j = 0; j < MAZE_SIZE; j++)
		{
			for (k = 0; k < MAZE_SIZE; k++)
			{
				infile >> mMansion[i][j][k];
			}
		}
	}
	infile.close();
	placeVictoryRoom();
	placeStairs();
	getStartPos();
}

bool weightedChance(int percentage)
{
	int num = rand() % 100;
	return num < percentage;
}

void Maze::placeVictoryRoom(void)
{
	int i = 0, j = 0, k = 0;
	bool success = false;
	while (!success)
	{
		i = rand() % FLOORS;
		j = rand() % MAZE_SIZE;
		k = rand() % MAZE_SIZE;
		if (mMansion[i][j][k] == 9)
		{
			success = true;
			mMansion[i][j][k] = 4;
		}
	}
	
}

void Maze::placeStairs(void)
{
	int j = 0, k = 0;
	bool success = false;
	while (!success)
	{
		j = rand() % MAZE_SIZE;
		k = rand() % MAZE_SIZE;
		if (mMansion[0][j][k] == mMansion[1][j][k] && mMansion[0][j][k] == 9)
		{
			success = true;
			mMansion[0][j][k] = mMansion[1][j][k] = 2;
		}
	}
	success = false;
	while (!success)
	{
		j = rand() % MAZE_SIZE;
		k = rand() % MAZE_SIZE;
		if (mMansion[1][j][k] == mMansion[2][j][k] && mMansion[1][j][k] == 9)
		{
			success = true;
			mMansion[1][j][k] = mMansion[2][j][k] = 3;
		}
	}
}

void Maze::placeRooms(void)
{
	int i = 0, j = 0, k = 0;
	for (i = 0; i < FLOORS; i++)
	{
		for (j = 0; j < MAZE_SIZE; j++)
		{
			for (k = 0; k < MAZE_SIZE; k++)
			{
				if (mMansion[i][j][k] == 9)
				{
					mMansion[i][j][k] = (rand() % ROOMS) * 2 + 10;
				}
			}
		}
	}
}


void Maze::getStartPos(void)
{
	do
	{
		myPos.z = rand() % FLOORS;
		myPos.x = rand() % MAZE_SIZE;
		myPos.y = rand() % MAZE_SIZE;
	} while (mMansion[myPos.z][myPos.x][myPos.y]);
}