#include "Maze.h"

Maze::Maze()
{
	int i = 0, j = 0, k = 0;
	for (i = 0; i < FLOORS; i++)
	{
		for (j = 0; j < MAZE_SIZE; j++)
		{
			for (k = 0; k < MAZE_SIZE; k++)
			{
				mMansion[i][j][k] = 0;
			}
		}
	}
	i = rand() % FLOORS;
	j = rand() % MAZE_SIZE;
	k = rand() % MAZE_SIZE;

	//set

}

bool weightedChance(int percentage)
{
	int num = rand() % 100;
	return num < percentage;
}