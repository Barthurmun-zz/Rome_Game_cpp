#include "stdafx.h"
#include <iostream>
#include "Warrior.h"
#include <string>
#include "Enemy.h"
#include <algorithm>

using namespace std;

Warrior::Warrior() //Konstruktor z startowymi statystykami danej klasy postaci
{
	 strenght = 7 ;
	 inteligence = 1;
	 agility = 2;
	 armor = 12;
	 mana = 1;
	 level = 1;
	 hitpoints = 100;
	 spell_name = "Berserker";
}

Warrior::~Warrior()
{
	cout << "/n Class Wizzard ends his life ! " << endl;
}


int Warrior::spell() 
{	
	mana -= 1;
	int damage;
	damage = 5 * strenght + agility;
	return damage;
}

int Warrior::spell2() //Czar
{
	mana -= 2;
	int damage;
	damage = 9 * strenght;
	return damage;
}

string Warrior::get_spell_name()
{ 
	return spell_name;
}

string Warrior::get_spell_name2()
{
	return spell_name2;
}

int Warrior::get_spell_cost()
{
	int x = 1;
	return x;
}

int Warrior::get_spell2_cost()
{
	int x = 2;
	return x;
}

int Warrior::atack() 
{ 
	int damage;
	damage = (3 * strenght + agility);
	return damage;
}

void Warrior::level_up()
{
	level += 1;
	hitpoints += 100;
	strenght += 7;
	armor += 10;
	agility += 2;
	mana += 1;
	cout << "\n NEW LEVEL !!!! " << endl;
	if (level >= 3)
	{
		 spell_name2 = "Rage";
	}
	if (level == 3)
	{
		cout << "You receive new ability ! Its Called RAGE" << endl;
	}
}


void Warrior::set_name()
{
	cout << "Podaj imie postaci: " << endl;
	cin >> name;
	transform(name.begin(), name.end(), name.begin(), ::tolower); //Operacje na stringach
	name.front() = toupper(name.front());

}

void Warrior::print_stats()
{
	cout << endl << " \n Strength: " << strenght << " \n " << "Agility :" << agility
		<< " \n " << "Inteligence:  " << inteligence << " \n " << "Hitpoints: " << hitpoints << " \n " << "Armor: " << armor
		<< " \n " << "Mana: " << mana << endl;

}

string Warrior::get_name()
{
	return name;
}


int Warrior::is_alive()
{
	if (hitpoints > 0)
	{
		return 1;
	}
	else return 0;
}

int Warrior::checkhp()
{
	return this->hitpoints;
}

int Warrior::checkmana()
{
	return this->mana;
}

int Warrior::show_level()
{
	return level;
}

void Warrior::get_hitted(int dmg)
{
	hitpoints -= (dmg - armor);

}

