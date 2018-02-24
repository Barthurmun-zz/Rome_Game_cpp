#include "stdafx.h"
#include <iostream>	
#include <string>
#include "Triarii.h"

using namespace std;

int Triari::level = 10; //Pole statyczne okreslajace poziom

Triari::Triari()
{
	strenght = 50;
	inteligence = 0;
	agility = 25;
	hitpoints = 300;
	armor = 50;
	name = "Triari";
}

int Triari::atack()
{
	int dmg;
	dmg = (strenght + agility);
	return dmg;
}

void Triari::get_hitted(int damage)
{
	hitpoints -= (damage - armor);
}

string Triari::check_name()
{
	return name;
}

int Triari::checkhp()
{
	return this->hitpoints;
}

int Triari::is_alive()
{
	if (checkhp() > 0)
	{
		return 1;
	}
	else return 0;
}

