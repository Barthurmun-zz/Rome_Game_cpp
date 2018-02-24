#ifndef _THIEF_H_ //ZABEZPIECZENIE ! DO NOT TOUCH ! 
#define _THIEF_H_
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Hero.h"

using namespace std;


class Thief : public Hero
{
	string name;
	string spell_name;
	int strenght;
	int agility;
	int inteligence;
	int hitpoints;
	int armor;
	int mana;
	int level;
	string spell_name2;

public:

	Thief operator+(int x); //Przeciazenie operatora + w ramach zwiekszenia sily

	Thief();

	virtual int spell();

	virtual int spell2();

	virtual int atack();

	virtual void level_up();

	virtual void get_hitted(int dmg);

	virtual void set_name();

	virtual string get_spell_name2();

	virtual string get_name();

	virtual void print_stats();

	virtual int is_alive();

	virtual int checkhp();

	virtual int checkmana();

	virtual int show_level();

	virtual string get_spell_name();

	virtual int get_spell_cost();

	virtual int get_spell2_cost();
};
#endif // !_THIEF_H_
