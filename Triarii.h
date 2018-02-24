#ifndef _TRIARI_H_
#define _TRIARI_H_

#include <iostream>	
#include <string>
#include "Enemy.h"

using namespace std;

class Triari : public Enemy
{
private:
	string name;
	int strenght;
	int agility;
	int inteligence;
	int hitpoints;
	int armor;
	static int level;

public:

	Triari();

	virtual	int atack();

	virtual void get_hitted(int dmg);

	virtual int is_alive();

	virtual int checkhp();

	virtual string check_name();

};
#endif // !_TRIARI_H_
