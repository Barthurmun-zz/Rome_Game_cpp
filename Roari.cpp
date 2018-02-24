#include "stdafx.h"
#include <iostream>	
#include <string>
#include "Roari.h"

using namespace std;

int Roari::level = 5; //Pole statyczne

Roari::Roari()
{
	strenght = 25;
	inteligence = 0;
	agility = 15;
	hitpoints = 200;
	armor = 25;
	name = "Roari";
}

string Roari::check_name()
{
	return name;
}

int Roari::atack()
{
	int dmg;
	dmg = (strenght + agility);
	return dmg;
}


void Roari::get_hitted(int damage)
{
	hitpoints -= (damage - armor);
}

int Roari::checkhp()
{
	return this->hitpoints;
}

int Roari::is_alive()
{
	if (checkhp() > 0)
	{
		return 1;
	}
	else return 0;
}
