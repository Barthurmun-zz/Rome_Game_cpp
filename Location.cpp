#include "StdAfx.h" //Biblioteka nie potrzebna, ale Visual ja potrzebuje :(
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include "Location.h"


using namespace std;

Location::~Location()
{
	delete [] table; //Zwalnianie dynamicznie zalokowanej pamieci
}

Location::Location() //Mechanizm podrozy ! 
{
	name = "Lokalizacja domyslna";
}

void Location::print_description()  //Wypis lokacji linijka po linijce 
{
	cout << endl << Location::description_l1 <<endl;
	cout << Location::description_l2 << endl;
	cout << Location::description_l3 << endl;
	cout << Location::description_l4 << endl;
	cout << Location::description_l5 << endl;
}

int Location::master(Hero *wska)
{
	return 0;
}

void Location::set_description(int nr_lini)
{
	
	/*	Opis lini do czytania z pliku (ktora lokalizacja gdize zaczyna)
		Coloseo = 1;
		Forum_Romanum = 6;,
		Piazza_Nuova = 11;
		Senate = 16; */
	fstream plik;
	plik.open("plik.txt", ios::in); //in jest metoda klasy ios
	
	if (plik.good() == false)
	{
		cout << "Nie udalo sie otworzyc pliku!";
		system("Pause");
		exit(0);
	}
	string linia;
	int actuall_nr=1;

	while (getline(plik,linia))
	{
		if (actuall_nr == nr_lini) description_l1 = linia;
		if (actuall_nr == nr_lini+1) description_l2 = linia;
		if (actuall_nr == nr_lini+2) description_l3 = linia;
		if (actuall_nr == nr_lini+3) description_l4 = linia;
		if (actuall_nr == nr_lini+4) description_l5 = linia;
		actuall_nr++ ;
	}
	plik.close();
	//system("Pause");
}