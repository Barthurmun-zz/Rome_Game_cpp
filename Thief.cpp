#include "stdafx.h"
#include <iostream>
#include <string>
#include "Thief.h"
#include "Enemy.h"
#include <algorithm>

using namespace std;

Thief::Thief()
{
	strenght = 3;
	inteligence = 0;
	agility = 7;
	hitpoints = 100;
	armor = 8;
	mana = 3;
	level = 1;
	spell_name = "Backstab!";
}


int Thief::spell() //Czar
{
	mana -= 1;
	int damage;
	damage = 5 * Thief::agility;
	return damage;
}

int Thief::spell2() //Czar
{
	mana -= 2;
	int damage;
	damage = 9 * Thief::agility;
	return damage;
}

string Thief::get_spell_name()
{
	return spell_name;
}

int Thief::get_spell_cost()
{
	int x = 1;
	return x;
}

int Thief::get_spell2_cost()
{
	int x = 2;
	return x;
}

int Thief::atack() // Piesc
{
	int damage;
	damage = (3*agility + strenght) - armor;
	return damage;
	//	enemy.hit(damage);
}


void Thief::level_up()
{
	level += 1;
	hitpoints += 140;
	mana += 1;
	strenght += 2;
	armor += 10;
	agility += 7;
	cout << "\n NEW LEVEL !!!! " << endl;
	if (level >= 3)
	{
		spell_name2 = "Fields of Blood";
	}
	if (level == 3)
	{
		cout << "You receive new ability ! Its Called FIELDS OF BLOOD" << endl;
	}
}

string Thief::get_spell_name2()
{
	return spell_name2;
}

void Thief::set_name()
{
	cout << "Podaj imie postaci: " << endl;
	cin >> name;
	transform(name.begin(), name.end(), name.begin(), ::tolower);
	name.front() = toupper(name.front());
}


void Thief::print_stats()
{
	cout << endl << " \n Strength: " << strenght << " \n " << "Agility :" << agility
		<< " \n " << "Inteligence:  " << inteligence << " \n " << "Hitpoints: " << hitpoints << " \n " << "Armor: " << armor
		<< " \n " << "Mana: " << mana << endl;

}

string Thief::get_name()
{
	return name;
}


int Thief::is_alive()
{
	if (hitpoints > 0)
	{
		return 1;
	}
	else return 0;
}

int Thief::checkhp()
{
	return this->hitpoints;
}

int Thief::checkmana()
{
	return this->mana;
}


int Thief::show_level()
{
	return level;
}

void Thief::get_hitted(int dmg)
{
	hitpoints -= (dmg - armor);

}

Thief Thief::operator+(int x) //Przeciazenie operatora + w ramach zwiekszenia sily
{
	Thief thief;
	thief.strenght = strenght + x;
	return thief;
}


