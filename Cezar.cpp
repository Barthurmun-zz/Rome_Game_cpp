#include "stdafx.h"
#include <iostream>	
#include <string>
#include "Cezar.h"

using namespace std;

Cezar::Cezar()
{
	strenght = 100;
	inteligence = 0;
	agility = 100;
	hitpoints = 500;
	armor = 350;
	name = "Cezar";
}


int Cezar::atack()
{
	int dmg;
	dmg = (strenght + agility);
	return dmg;
}


void Cezar::get_hitted(int damage)
{
	hitpoints -= (damage - armor);
}

int Cezar::checkhp()
{
	return this->hitpoints;
}

string Cezar::check_name()
{
	return name;
}

int Cezar::is_alive()
{
	if (checkhp() > 0)
	{
		return 1;
	}
	else return 0;
}
