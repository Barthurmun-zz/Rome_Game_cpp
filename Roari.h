#ifndef _ROARI_H_
#define _ROARI_H_

#include <iostream>	
#include <string>
#include "Enemy.h"

using namespace std;



class Roari : public Enemy
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

	Roari();

	virtual	int atack();

	virtual void get_hitted(int dmg);

	virtual int is_alive();

	virtual string check_name();

	virtual int checkhp();

};
#endif // !_ROARI_H_
