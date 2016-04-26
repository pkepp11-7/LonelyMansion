#include "player.h"
#include "room.h"

Room::Room(int *newRoomType, Player *newPlayer)
{
	int guiEnter;
	// GUI: Print to screen "Enter the room?"
	// guiEnter = [return 1 for enter, 0 for cancel];
	if (guiEnter == 1)
	{
		**roomType = *newRoomType;
		**p1 = *newPlayer;
		switch (**roomType)
		{
		case 2:
			stairRoom();
			break;
		case 3:
			finishRoom();
			break;
		case 10:
		case 12:
		case 14:
		case 16:
		case 18:
		case 20:
		case 22:
		case 24:
			empty();
			break;
		case 26:
		case 28:
			suhDude();
			break;
		case 30:
		case 32:
			donaldTrump();
			break;
		case 34:
		case 36:
		case 38:
		case 40:
			monsterLevel1();
			break;
		case 42:
		case 44:
		case 46:
		case 48:
			monsterLevel2();
			break;
		case 50:
		case 52:
		case 54:
			monsterLevel3();
			break;
		case 56:
		case 58:
		case 60:
			monsterLevel4();
			break;
		case 62:
		case 64:
			monsterLevel5();
			break;
		case 66:
		case 68:
			monsterLevel6();
			break;
		case 70:
		case 72:
		case 74:
		case 76:
			weaponLevel1();
			break;
		case 78:
		case 80:
		case 82:
			weaponLevel2();
			break;
		case 84:
		case 86:
			weaponLevel3();
			break;
		case 88:
		case 90:
		case 92:
			healthRoom();
			break;
		case 94:
		case 96:
		case 98:
			HPRoom();
			break;
		case 100:
		case 102:
		case 104:
			attackSpeedRoom();
			break;
		case 106:
		case 108:
			johnCena();
			break;
		}
	}
}

void Room::stairRoom()
{

}
void Room::finishRoom()
{
	int guiReturn = 0;
	// GUI: Print "You walk in to the room and notice the room is empty, except for a square outline on the floor. Examine outline?"
	// guiReturn = [return 1 if true, 0 if false];
	if (guiReturn == 1)
	{
		// GUI: Print "After examining the outline, you find it is a trap door in to a dark alley. Enter the alley?
		// guiReturn = [return 1 if true, 0 if false];
		if (guiReturn == 1)
		{
			// GUI: Clear screen, completely black
			// GUI: Print "Entering the alley results in your escape. You exit the mansion to find a german shepard and the remenents of the nuclear apocolypse. Welcome to Fallout 4. War, war never changes."
			// GUI: Clear screen, completely black
			// GUI: Print "CONGRADULATIONS! YOU HAVE SUCCESSFULLY NAVIGATED THE LONELY MANSION! THANKS FOR PLAYING!"
		}
	}
}
void Room::empty()
{
	int guiReturn = 0;
	// GUI: Print "You walk in to the room and notice the room is empty. Leave the room?"
	while (guiReturn == 0)
	{
		// guiReturn = [return 1 if true, 0 if false];
		if (guiReturn == 1)
		{
			// GUI: Print "You left the room."
		}
		else
		{
			// GUI: Print "Well isn't this a nice room. You sit down and wait for some time. Leave the room now?"
		}
	}
}
void Room::suhDude()
{
	int guiReturn = 0;
	// GUI: Print "You walk in to the room and see someone facing away from you, acting suspiciously. Talk to them?"
	// guiReturn = [return 1 if true, 0 if false];
	if (guiReturn == 1)
	{
		// GUI: Print "You greet them with a questioning "Hello?". He then turns around, nods his head, waves a peace sign in front of his face and says, "Suh dude?" while casually leaving the room. Leave the room?"
		guiReturn = 0;
	}
	else
	{
		// GUI: Print "You left the room."
		guiReturn = 1;
	}
	while (guiReturn == 0)
	{
		// guiReturn = [return 1 if true, 0 if false];
		if (guiReturn == 1)
		{
			// GUI: Print "You left the room."
			**roomType = 10;
		}
		else
		{
			// GUI: Print "Well isn't this a nice room. You sit down and wait for some time. Leave the room now?"
		}
	}
}
void Room::donaldTrump()
{
	// GUI: Print "You walk in to the room and hear echos of building walls, China, and making America great again. You are terrified and immediately leave."
}
void Room::monsterLevel1()
{
	int guiReturn = 0, chance = 0;
	// GUI: Print "You walk in to the room and see a rodent coming towards you. What do you do?"
	// guiReturn = [return 1 if attack, 0 if run];
	if (guiReturn == 0)
	{
		chance = (rand() % 100);
		if (chance <= (100 * (*p1)->getHitEvasiveness()))
		{
			// GUI: Print "You left the room."
		}
		else
		{
			// GUI: Print "You can't leave!"
			guiReturn = 1;
		}
	}
}
void Room::monsterLevel2()
{

}
void Room::monsterLevel3()
{

}
void Room::monsterLevel4()
{

}
void Room::monsterLevel5()
{

}
void Room::monsterLevel6()
{

}
void Room::weaponLevel1()
{

}
void Room::weaponLevel2()
{

}
void Room::weaponLevel3()
{

}
void Room::healthRoom()
{

}
void Room::HPRoom()
{

}
void Room::attackSpeedRoom()
{

}
void Room::johnCena()
{
	// GUI: Print "You walk in to the room and notice the room is empty. However, you feel compelled to stay. After a moment a man appears out of nowhere. You've seen him before, but you can't remember where, until it he gets closer. Suddenly you remember who he is."
	// GUI: Clear Text
	// GUI: Print "AND HIS NAME WAS JOHN CENA!"
	PlaySound(TEXT("john_cena.wav"), NULL, SND_FILENAME);
	(*p1)->setHitPoints(0);
	// GUI: Clear Text
	// GUI: Print "GAME OVER."
}