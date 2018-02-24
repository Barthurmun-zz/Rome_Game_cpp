#include "StdAfx.h" //Biblioteka nie potrzebna, ale Visual ja potrzebuje :(
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Triarii.h"
#include "Bestiariusz.h"
#include "Piazza_Nuovas.h"
#include "Hero.h"
#include "Fight.h"


using namespace std;

Piazza_Nuova::Piazza_Nuova()
{
	Piazza_Nuova::set_description(11);
}

void Piazza_Nuova::print_description()  //Wypis lokacji linijka po linijce 
{
	cout << endl << Piazza_Nuova::description_l1 << endl;
	cout << Piazza_Nuova::description_l2 << endl;
	cout << Piazza_Nuova::description_l3 << endl;
	cout << Piazza_Nuova::description_l4 << endl;
	cout << Piazza_Nuova::description_l5 << endl;
}


int Piazza_Nuova::master(Hero *wsk) //Specjalnie int aby w metodzie start klasy Game mogl przypisac wartosc 
							   //Cialo calej gry dla klasy Warrior!NAJWAZNIEJSZEE!!W trakcie
							   // szukania pomyslu na skrocenie tej funkcji moze ??wskazniki?? 
{
	Location::print_description();
	Enemy *pointer;
	Triari triari1;
	pointer = &triari1;
	cout << "Triari is coming for you ! What do you do: ? " << endl;
	cout << " 1). Fight ! " << endl << "2). Run to Forum_Romanum " << endl << " 3).Run to Senate" << endl;
	char select;
	cin >> select;
	int bear = select - '0';
	if (bear == 1)
	{
		return fight(3, wsk, pointer);
	}
	else if (bear == 2)
	{
		return 2;
	}
	else if (bear == 3)
	{
		return 4;
	}
	else
	{
		cout << "Wrong key ! Try again ! " << endl;
		return 3;
	}
}