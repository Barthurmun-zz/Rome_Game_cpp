#include "stdafx.h"
#include <iostream>
#include <string>
#include "Wizzard.h"
#include "Enemy.h"
#include <algorithm>

using namespace std;

Wizzard::Wizzard()
{
	strenght = 2;
	inteligence = 6;
	agility = 2;
	hitpoints = 100;
	armor = 5;
	mana = 8;
	level = 1;
	spell_name = "Fireball";
}

Wizzard::~Wizzard()
{
	//cout << "/n Class Wizzard ends his life ! " << endl;
}

int Wizzard::spell() //Czar
{
	mana -= 1;
	int damage;
	damage = 5 * Wizzard::inteligence;
	return damage;
}

int Wizzard::spell2() //Czar
{
	mana -= 2;
	int damage;
	damage = 9 * Wizzard::inteligence;
	return damage;

}

string Wizzard::get_spell_name()
{
	return spell_name;
}

string Wizzard::get_spell_name2()
{
	return spell_name2;
}

int Wizzard::get_spell_cost()
{
	int x = 1;
	return x;
}

int Wizzard::get_spell2_cost()
{
	int x = 2;
	return x;
}

int Wizzard::atack() // Piesc
{
	int damage;
	damage =  (Wizzard::agility + 3*Wizzard::inteligence) - armor;
	return damage;
	//	enemy.hit(damage);
}


void Wizzard::level_up()
{
	level += 1;
	hitpoints += 100;
	mana += 3;
	inteligence += 7;
	armor += 10;
	agility += 2;
	cout << "/n NEW LEVEL !!!! " << endl;
	if (level >= 3)
	{
		spell_name2 = "Chaos Storm!";
	}
	if (level == 3)
	{
		cout << "You receive new ability ! Its Called CHAOS STORM" << endl;
	}
}

void Wizzard::set_name()
{
	cout << "Podaj imie postaci: " << endl;
	cin >> name;
	transform(name.begin(), name.end(), name.begin(), ::tolower);
	name.front() = toupper(name.front());
}


void Wizzard::print_stats()
{
	cout << endl << " \n Strength: " << strenght << " \n " << "Agility :" << agility
		<< " \n " << "Inteligence:  " << inteligence << " \n " << "Hitpoints: " << hitpoints << " \n " << "Armor: " << armor
		<< " \n " << "Mana: " << mana << endl;

}

string Wizzard::get_name()
{
	return name;
}


int Wizzard::is_alive()
{
	if (hitpoints > 0)
	{
		return 1;
	}
	else return 0;
}

int Wizzard::checkhp()
{
	return this->hitpoints;
}

int Wizzard::checkmana()
{
	return this->mana;
}


int Wizzard::show_level()
{
	return level;
}

void Wizzard::get_hitted(int dmg)
{
	hitpoints -= (dmg - armor);

}

Wizzard Wizzard::operator+(int x) //Przeciazenie operatora + w ramach zwiekszenia sily
{
	Wizzard mage;
	mage.strenght = strenght + x;
	return mage;
}

Wizzard  Wizzard::operator-(int x) //Przeciazenie operatora - w ramach zmniejszenia sily
{
	Wizzard mage;
	mage.strenght = strenght - x;
	return mage;
}

