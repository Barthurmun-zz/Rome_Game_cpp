#include "stdafx.h"
#include <iostream>	
#include <string>
#include "Hestati.h"

using namespace std;

int Hestati::level = 1; //Pole statyczne

Hestati::Hestati()
{
	strenght = 15;
	inteligence = 0;
	agility = 5;
	hitpoints = 100;
	armor = 5;
	name = "Hestati";
}


int Hestati::atack()
{
	int dmg;
	dmg = (strenght + agility);
	return dmg;
}


void Hestati::get_hitted(int damage)
{
	hitpoints -= (damage - armor);
}

string Hestati::check_name()
{
	return name;
}

int Hestati::checkhp()
{
	return this->hitpoints;
}

int Hestati::is_alive()
{
	if (checkhp() > 0)
	{
		return 1;
	}
	else return 0;
}

Hestati Hestati::operator+(int x) //Przeciazenie operatora + w ramach zwiekszenia sily
{
	Hestati minion;
	minion.strenght = strenght + x;
	return minion;
}
