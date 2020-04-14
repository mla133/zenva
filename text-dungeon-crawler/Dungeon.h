#include "Player.h"

#ifndef DUNGEON_H
#define DUNGEON_H

class Dungeon 
{
	public:
		Player player;
		Room rooms[4];

		Dungeon(Player);

		int runDungeon();
		void enterRoom(Room *);
		void handleEmptyRoom(Room *);
		void handleRoomWithChest(Room *);
		void handleRoomWithEnemy(Room *);
		void handleLootActions(Room *);
		void handleFightActions(GameCharacter *);
		void handleMovementActions(Room *);
		void printActions(int, string[]);
		int performEndGameLogic();
};
#endif
