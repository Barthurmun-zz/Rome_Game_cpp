#include "StdAfx.h" //Biblioteka nie potrzebna, ale Visual ja potrzebuje :(
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Cezar.h"
#include "Senatos.h"
#include "Coloseos.h"
#include "Hero.h"
#include "Fight.h"


using namespace std;

Senato::Senato()
{
	Senato::set_description(16);
}

void Senato::print_description()  //Wypis lokacji linijka po linijce 
{
	cout << endl << Senato::description_l1 << endl;
	cout << Senato::description_l2 << endl;
	cout << Senato::description_l3 << endl;
	cout << Senato::description_l4 << endl;
	cout << Senato::description_l5 << endl;
}

int Senato::master(Hero *wsk) //Specjalnie int aby w metodzie start klasy Game mogl przypisac wartosc 
									 //Cialo calej gry dla klasy Warrior!NAJWAZNIEJSZEE!!W trakcie
									 // szukania pomyslu na skrocenie tej funkcji moze ??wskazniki?? 
{
	print_description();
	Enemy *pointer;
	Cezar cezar1;
	pointer = &cezar1;
	cout << "Cezar is coming for you ! What do you do: ? " << endl;
	cout << " 1). Fight ! " << endl << "2). Run to Piazza_Nuova! " << endl << " 3).Run to Coloseo" << endl;
	char select;
	cin >> select;
	int bear = select - '0';
	if (bear == 1)
	{
		return fight(4, wsk, pointer);
	}
	else if (bear == 2)
	{
		return 3;
	}
	else if (bear == 3)
	{
		Coloseo coloseo1; //???????????
		return 1;
	}
	else
	{
		cout << "Wrong key !  " << endl;
		return 4;
	}
	return 0;
}