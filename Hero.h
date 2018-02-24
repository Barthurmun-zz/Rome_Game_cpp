#ifndef _HERO_H_
#define _HERO_H_
#include <iostream>
#include <string>

using namespace std;

class Hero
{protected:
	string name;
	string spell_name;
	int strenght;
	int inteligence;
	int agility;
	int armor;
	int mana;
	int level;
	int hitpoints;
	string spell_name2;
public:

	 virtual int atack() = 0;

	 virtual void get_hitted(int dmg) = 0;

	 virtual void level_up() = 0;

	 virtual int spell() = 0;

	 virtual int get_spell2_cost() = 0;

	 virtual int spell2() =0;

	 virtual string get_spell_name() = 0;

	 virtual int checkhp() = 0;

	 virtual string get_spell_name2() = 0;

	 virtual int is_alive() = 0;

	 virtual int checkmana() = 0;

	 virtual int show_level() = 0;
	 
	 virtual void set_name() = 0;

	 virtual string get_name() = 0;

	 virtual void print_stats() = 0;

	 virtual int get_spell_cost() = 0;
};


#endif // !_HERO_H_