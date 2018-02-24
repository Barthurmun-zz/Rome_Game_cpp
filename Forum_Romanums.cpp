#include "StdAfx.h" //Biblioteka nie potrzebna, ale Visual ja potrzebuje :(
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Roari.h"
#include "Forum_Romanums.h"
#include "Hero.h"
#include "Fight.h"


using namespace std;

Forum_Romanum::Forum_Romanum()
{
	Forum_Romanum::set_description(6);
}

void Forum_Romanum::print_description()  //Wypis lokacji linijka po linijce 
{
	cout << endl << Forum_Romanum::description_l1 << endl;
	cout << Forum_Romanum::description_l2 << endl;
	cout << Forum_Romanum::description_l3 << endl;
	cout << Forum_Romanum::description_l4 << endl;
	cout << Forum_Romanum::description_l5 << endl;
}

int Forum_Romanum::master(Hero *wsk) //Specjalnie int aby w metodzie start klasy Game mogl przypisac wartosc 
							   //Cialo calej gry dla klasy Warrior!NAJWAZNIEJSZEE!!W trakcie
							   // szukania pomyslu na skrocenie tej funkcji moze ??wskazniki?? 
{
	print_description();
	Enemy *pointer;
	Roari roari1;
	Roari roari2(roari1); //Konstruktor kopiujacy
	pointer = &roari1;

	cout << " \n Roari is coming for you ! What do you do: ? " << endl;
	cout << " 1). Fight ! " << endl << "2). Run to  Coloseo! " << endl << " 3).Run to Piazza_Nuova" << endl;
	char select;
	cin >> select;
	int bear = select - '0';
	if (bear == 1)
	{
		return fight(2, wsk, pointer);
	}
	else if (bear == 2)
	{
		return 1;
	}
	else if (bear == 3)
	{
		return 3;
	}
	else
	{
		cout << "Wrong key ! " << endl;
		return 2;
	}
	return 0;
}