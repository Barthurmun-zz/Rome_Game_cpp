#include "stdafx.h" // Wymog visuala ! 
#include <iostream>
#include <string>
#include "game.h"
#include <fstream>
#include <cstdlib>
#include "Fight.h"
#include "Thief.h"
#include "Coloseos.h"
#include "Forum_Romanums.h"
#include "Senatos.h"
#include "Piazza_Nuovas.h"
#include "Warrior.h"
#include "Wizzard.h"
#include "Thief.h"

using namespace std;

int Game::*memory = NULL;

Game::Game() //Alokacja pamieci
{
	int *memory = new int[10];
}

Game::~Game() //zwalniamy pamiec
{
	//delete [] memory;
}

void Game::fill() //wypelniamy wskaznik object.
{
	int objects = sizeof(Hero);
	int *memory = &objects;
}

void Game::start() // Rozgrywka ! WAZNE !
{
	fstream ops;
	ops.open("opis.txt", ios::in); //in jest metoda klasy ios do czytania Z pliku

	if (ops.good() == false) //Sprawdzenie odczytu
	{
		cout << "Nie udalo sie otworzyc pliku! :( ";
		system("Pause");
		exit(0);
	}
	string linia;
	int nr_lini = 1;
	int actuall_nr = 1;

	while (getline(ops, linia)) //Czytanie linia po lini tekstu.Operacje na stringach
	{
		if (actuall_nr == nr_lini) cout << linia << endl ;
		if (actuall_nr == nr_lini + 1) cout << linia << endl;
		if (actuall_nr == nr_lini + 2) cout << linia << endl;
		if (actuall_nr == nr_lini + 3) cout << linia << endl;
		if (actuall_nr == nr_lini + 4) cout << linia << endl;
		actuall_nr++;
	}

	ops.close(); 
///////// 
	Coloseo coloseo1; // Inicjalizacja odpowiednich lokacji naszej gry
	Forum_Romanum forum1;
	Piazza_Nuova piazza1;
	Senato senato1;
	Coloseo_Dungeon1 dungeon1;
	Coloseo_Dungeon2 dungeon2;


label: // Do instrukcji goto, na etapie myslenia jak to obejsc ??? 
	cout << "Chose your class: " << endl;
	cout << " 1). Warrior " << endl;
	cout << " 2). Wizzard " << endl;
	cout << " 3). Thief " << endl;
	char select;  //dzieki temu zabiegowi " xxx - '0' " rozwiazujemy problem zlego
	cin >> select; // klawisza wcisnetego i literki naraz
	int choice = select - '0';
	Hero *wsk;
	Warrior warrior1;
	Wizzard wizzard1;
	Thief thief1;
	Wizzard wizzard2(wizzard1);//Kontruktor kopiujacy wzmacniajacy nam postac
	wizzard2 = wizzard1 + 50; //przy uzyciu przeciazenia operatora robimy koksa z w2

	switch (choice)
	{
		case 1: // Tworzymy postac warrior, i przenosimy sie do odpowiednich lokacji
		{
			wsk = &warrior1;
			break;
		}
		case 2: // Alternatywa do opcji wyzej lecz dla Wizzarda ! 
		{
			wsk = &wizzard1;
			break;
		}
		case 3: // Alternatywa do opcji wyzej lecz dla Z³odzieja ! 
		{
			wsk = &thief1;
			break;
		}
		default:
		{
			cout << "Your choice is not allowed, try again ! **** " << endl;
			goto label; /*Wiem ze nie mozna tego uzywac ale nie wpadlem na inny pomysl wyjscia
						z petli switch case:( Zamkniecie switch case'a w funkcji ktora wywola
						sama siebie nie wydaje sie lepszym pomyslem*/
		}
	}
			wsk -> set_name();
			cout << endl << "\n Your name: " << wsk->get_name() << endl;
			cout << "Your level 1 stats: " << endl;
			wsk->print_stats();
			int actualLoc = 1;
			while (true)
			{
				if (actualLoc == 1) 
				{
					actualLoc = coloseo1.master(wsk);//Odwolania do lokacji
				}
				else if (actualLoc == 2)
				{
					actualLoc = forum1.master(wsk);
				}
				else if (actualLoc == 3) 
				{
					actualLoc = piazza1.master(wsk);
				}
				else if (actualLoc == 4) 
				{
					actualLoc = senato1.master(wsk);
				}
				else if (actualLoc == 5)
				{
					actualLoc = dungeon1.master(wsk);
				}
				else if (actualLoc == 6)
				{
					actualLoc = dungeon2.master(wsk);
				}
				else break;
			}	
}