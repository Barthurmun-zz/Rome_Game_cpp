#ifndef _CEZAR_H_
#define _CEZAR_H_

#include <iostream>	
#include <string>
#include "Enemy.h"

using namespace std;


class Cezar : public Enemy
{
	private:
		string name;
		int strenght;
		int agility;
		int inteligence;
		int hitpoints;
		int armor;


public:

	Cezar();

	virtual	int atack();

	virtual void get_hitted(int dmg);

	virtual int is_alive();

	virtual string check_name();

	virtual int checkhp();

};
#endif // !_CEZAR_H_
