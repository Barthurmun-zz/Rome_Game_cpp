#ifndef _HESTATI_H
#define _HESTATI_H_

#include <iostream>	
#include <string>
#include "Enemy.h"

using namespace std;

class  Hestati : public Enemy
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

	Hestati();

	virtual	int atack();

	Hestati operator+(int x); //Przeciazenie operatora + w ramach zwiekszenia sily
	
	virtual void get_hitted(int dmg);

	virtual string check_name();

	virtual int is_alive();

	virtual int checkhp();

};
#endif // !_HESTATI_H
