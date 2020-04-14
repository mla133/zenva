#include <string>

#ifndef ITEM_H
#define ITEM_H
using namespace std;

class Item
{
	public:
		string name;
		int health, attack, defense;
		Item(string, int, int, int);
};
#endif
