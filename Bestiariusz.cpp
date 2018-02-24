#include "stdafx.h"
#include <iostream>	
#include <string>
#include "Bestiariusz.h"
#include "Enemy.h"

using namespace std;

void fullfill() //Zapelnienie Bestiariusza statystykami wrogow i ich wywolanie
{
	Bestiariusz tab[4];
	tab[0].name = "Hestati";
	tab[1].name = "Roari";
	tab[2].name = "Triari";
	tab[3].name = "Cezar";
	tab[0].strenght = 15;
	tab[1].strenght = 25;
	tab[2].strenght = 50;
	tab[3].strenght = 100;
	tab[0].agility = 5;
	tab[1].agility = 15;
	tab[2].agility = 25;
	tab[3].agility = 100;
	tab[0].inteligence = 0;
	tab[1].inteligence = 0;
	tab[2].inteligence = 0;
	tab[3].inteligence = 0;
	tab[0].hitpoints = 100;
	tab[1].hitpoints = 200;
	tab[2].hitpoints = 300;
	tab[3].hitpoints = 500;
	tab[0].armor = 5;
	tab[1].armor = 25;
	tab[2].armor = 50;
	tab[3].armor = 350;

	 for (int i = 0; i < 3; i++) // wywolanie wszystkich cech
	{
		cout << " \n Name:  " << tab[i].name << endl;
		cout << "  Strenght:  " << tab[i].strenght << endl;
		cout << "  Agility:  " << tab[i].agility << endl;
		cout << "  Inteligence:  " << tab[i].inteligence << endl;
		cout << "  Hitpoints:  " << tab[i].hitpoints << endl;
		cout << "  Armor:  " << tab[i].armor << endl;
	}

	// return tab[0].name; 
	// return tab[1].name;
	// return tab[2].name;
	// return tab[3].name;
};



