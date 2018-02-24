#ifndef _WARRIOR_H_
#define _WARRIOR_H_
#include "stdafx.h"
#include <iostream>
#include <string>
#include "Hero.h"

using namespace std;



class Warrior : public Hero	 
{	
	

public:

	Warrior(); 

	~Warrior();
	
	 virtual int spell();

	 virtual int spell2();

	 virtual int atack();

	 virtual void get_hitted(int dmg);

	 virtual void level_up();

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
#endif // !_WARRIOR_H_
