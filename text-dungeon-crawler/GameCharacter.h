#include <string>

#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H
using namespace std;

class GameCharacter
{
	public:
		string name;
		int maxHealth, currentHealth, attack, defense;
		GameCharacter(string, int, int, int);

		int takeDamage(int);
		bool checkIsDead();

};
#endif
