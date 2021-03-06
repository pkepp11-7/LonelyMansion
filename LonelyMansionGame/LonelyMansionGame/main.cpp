#include <SFML\Graphics.hpp>
#include "Maze.h"
int main(void)
{
	srand((unsigned int)time(0));

	return 0;
}

// ~~~~~ READ ME ~~~~~~
//
//
// ROOM GENERATION:
// - Each floor will be represented as a 2D array of int's
// - 2D array will include int's for hallways, player, and rooms
// - Rooms will have to be generated by Patrick
// - Generate a random number between __ and __ for a room
// - Use constructor to pass in an int
// - The int you pass in will spawn a specific room
// - The room will be activated after user input within Room class
// GRID CODE:
// -1 = Player
// 0 = Hallway
// 1 = Border
// 2 = Stair Room
// 3 = Finish Room
// 10 = Room 1
// 11 = Room 1 complete
// 12 = Room 2
// 13 = Room 2 complete
//
//
// HOW TO PLAY .wav FILES:
// - Include the three indicated lines in the header
// - Include the indicated line in main()
// - Change the name of the file if needed
// - Include the .wav file as a resource
// - * Can only play .wav files, no .mp3 or other music files