#include "StdAfx.h" //Biblioteka nie potrzebna, ale Visual ja potrzebuje :(
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Hestati.h"
#include "Bestiariusz.h"
#include "Coloseos.h"
#include "Hero.h"
#include "Fight.h"

using namespace std;

Coloseo::Coloseo() 
{
	Coloseo::set_description(1);
}

void Coloseo::print_description()  //Wypis lokacji linijka po linijce 
{
	cout << endl << Coloseo::description_l1 << endl;
	cout << Coloseo::description_l2 << endl;
	cout << Coloseo::description_l3 << endl;
	cout << Coloseo::description_l4 << endl;
	cout << Coloseo::description_l5 << endl;
}

int Coloseo::master(Hero *wsk) //Specjalnie int aby w metodzie start klasy Game mogl przypisac wartosc 
								//Cialo calej gry dla klasy Warrior!NAJWAZNIEJSZEE!!W trakcie

{								// szukania pomyslu na skrocenie tej funkcji moze ??wskazniki?? 
		print_description();
		Enemy *pointer;
		Hestati hestati1;
		Hestati hestati2(hestati1);// Konstruktor kopiuj¹cy tworzy 2 przeciwnikow.
		hestati2 = hestati1 + 10; //Przy uzyciu przeladowanego operatora boostuje hestati2
		pointer = &hestati1;

		cout << "\n Hestati is coming for you ! What do you do: ? " << endl;
		cout << "\n  1). Fight ! " << endl << "2). Run to  Forum_Romanum! " << endl
			<< "3). Look at enemy description" << endl << "4). Step into DUNGEONES ! BEWARE!" << endl;
		char select; // Mechanizm ochronny przed missclick'iem
		cin >> select;
		int bear = select - '0'; // bear -> zmienna do wyboru funkcji

		if (bear == 1) //Mechanizm calej walki dlatego tyle zajmuje :(
		{
			return fight(1, wsk, pointer);
		}
		else if (bear == 2)
		{
			return 2;
		}
		else if (bear == 3)
		{
			fullfill(); // Wywolanie Bestiariusza
			system("Pause");
			return 1;
		}
		else if (bear == 4)
		{
			return 5;
		}
		else
		{
			cout << "Wrong key ! " << endl; // Jesli cos zlego wcisniesz to wracasz do pkt.wyjscia
			return 1;
		}
	return 0;
}

int Coloseo_Dungeon1::master(Hero *wsk) //Specjalnie int aby w metodzie start klasy Game mogl przypisac wartosc 
									   //Cialo calej gry dla klasy Warrior!NAJWAZNIEJSZEE!!W trakcie
{										// szukania pomyslu na skrocenie tej funkcji moze ??wskazniki?? 
	Enemy *pointer;
	Hestati hestati2;
	hestati2 = hestati2 + 20;
	//Gypsy_Hestati gypsy1;
	pointer = &hestati2;
	cout << "\n BEWARREEE DUNGEONES ARE CRAZZYYYY \n";
	cout << "\n Gypsy Hestati is coming for you ! What do you do: ? " << endl;
	cout << "\n  1). Fight ! " << endl << "2). Run to  Coloseo! " << endl
		<< "3). Go deaper into Dungeones" << endl;
	char select; // Mechanizm ochronny przed missclick'iem
	cin >> select;
	int bear = select - '0'; // bear -> zmienna do wyboru funkcji

	if (bear == 1) //Mechanizm calej walki dlatego tyle zajmuje :(
	{
		return fight(5, wsk, pointer);
	}
	else if (bear == 2)
	{
		return 1;
	}
	else if (bear == 3)
	{
		return 6;
	}
	else
	{
		cout << "Wrong key ! " << endl; // Jesli cos zlego wcisniesz to wracasz do pkt.wyjscia
		return 1;
	}
	return 0;
}

int Coloseo_Dungeon2::master(Hero *wsk) //Specjalnie int aby w metodzie start klasy Game mogl przypisac wartosc 
										//Cialo calej gry dla klasy Warrior!NAJWAZNIEJSZEE!!W trakcie
{										// szukania pomyslu na skrocenie tej funkcji moze ??wskazniki?? 
	Enemy *pointer;
	Hestati hestati2;
	hestati2 = hestati2 + 60;
	//Gypsy_Hestati gypsy1;
	pointer = &hestati2;
	cout << "\n BEWARREEE DUNGEONES ARE CRAZZYYYY , EVEN MORE NOW\n";
	cout << "\n Gypsy Hestati is coming for you ! What do you do: ? " << endl;
	cout << "\n  1). Fight ! " << endl << "2). GO BACK! " << endl;
	char select; // Mechanizm ochronny przed missclick'iem
	cin >> select;
	int bear = select - '0'; // bear -> zmienna do wyboru funkcji

	if (bear == 1) //Mechanizm calej walki dlatego tyle zajmuje :(
	{
		return fight(6, wsk, pointer);
	}
	else if (bear == 2)
	{
		return 5;
	}
	else
	{
		cout << "Wrong key ! " << endl; // Jesli cos zlego wcisniesz to wracasz do pkt.wyjscia
		return 1;
	}
	return 0;
}
