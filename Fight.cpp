#include "StdAfx.h" //Biblioteka nie potrzebna, ale Visual ja potrzebuje :(
#include "Fight.h"
#include <iostream>
#include <string>

using namespace std;

int fight(int nr, Hero *wsk,Enemy *pointer) /* nr = lokalizacja, czyli 1-Coloseum 2-Forum Romanum  3-Piazza
											 4-Senat; Name = Nazwa klasy postaci*/
{
			if (wsk -> is_alive() && pointer->is_alive()) //Sprawdzenie czy postacie zyja
			{
				cout << " \n Prepare for battle with  " <<pointer -> check_name() << endl;

				while (wsk ->is_alive() && pointer->is_alive()) //Ponowne sprawdzenie, potrzebne? Dylemat
				{
					cout << "\n What ability you use ? : " << endl;
					cout << " Remember you will see dealed damage to enemy without considering \n"
						<< "his armor, so actuall true damage will be different" << endl;
					cout << "\n 1). Atack " << endl << "2).  " << wsk->get_spell_name()
						<< "(cost " << wsk->get_spell_cost() << "mana) " << endl; 
					if ((wsk -> show_level()) >= 3)
					{
						cout << "3).  " << wsk->get_spell_name2()
							<< "(cost " << wsk->get_spell2_cost() << "mana) " << endl;
					}
					cout << endl;
					char mojo; // Mechanizm ochronny przed missclick'iem
					cin >> mojo;
					int temp = mojo - '0'; // bear -> zmienna do wyboru funkcji 
					if (temp == 1)
					{
						pointer->get_hitted(wsk -> atack());
						cout << "You deald : \n " << wsk ->atack() << "damage " << endl \
							<< "Enemy has :" << pointer-> checkhp() << "HP left" << endl;
						wsk -> get_hitted(pointer->atack());
						cout << "Enemy deald : \n " << pointer->atack() << "damage " << endl \
							<< "You has :" << wsk ->checkhp() << "HP left" << endl;
					}

					else if (temp == 2)
					{
						if (wsk -> checkmana() > 0)
						{
							pointer ->get_hitted(wsk -> spell());
							cout << "You deald : \n " << wsk ->spell() << "damage " << endl \
								<< "Enemy has :" << pointer->checkhp() << "HP left" << endl;
							wsk -> get_hitted(pointer->atack());
							cout << "Enemy deald : \n " << pointer->atack() << "damage " << endl \
								<< "You have :" << wsk -> checkhp() << "HP left" << endl;
						}
						else
						{
							cout << " \n Brak many ! " << endl;
						}
					}
					else if (temp == 3)
					{
						if (wsk->checkmana() > 1)
						{
							pointer->get_hitted(wsk->spell2());
							cout << "You deald : \n " << wsk->spell2() << "damage " << endl \
								<< "Enemy has :" << pointer->checkhp() << "HP left" << endl;
							wsk->get_hitted(pointer->atack());
							cout << "Enemy deald : \n " << pointer->atack() << "damage " << endl \
								<< "You have :" << wsk->checkhp() << "HP left" << endl;
						}
						else
						{
							cout << " \n Brak many ! " << endl;
						}
					}
					else
					{
						cout << " \n Wrong button ! \n Your fight will be reseted ! " << endl;
						return 1;
					}
				}
			}


			if (!wsk->is_alive()) //Warunek -> musisz zyc
			{
				cout << " \n \n YOU LOSE ! \n GAME OVER !!! \n " << endl;
				system("Pause");
				exit(0);
			}


			if (!pointer->is_alive()) //Instrukcje po wygranej walce !
			{
				if (nr == 1)
				{
					if (wsk->show_level() <= 3) // Na nim mozesz wbic max 3lv. W przyszlosci dodac exp!
					{
						wsk->level_up();
						cout << "\n  Right now you have level: " << wsk ->show_level() << endl;
					}
				}
				else if (nr == 2)
				{
					if (wsk->show_level() <= 5) // Na nim mozesz wbic max 3lv. W przyszlosci dodac exp!
					{
						wsk->level_up();
						cout << "\n Right now you have level: " << wsk->show_level() << endl;
					}
				}
				else if (nr == 3)
				{
					if (wsk->show_level() <= 10) // Na nim mozesz wbic max 3lv. W przyszlosci dodac exp!
					{
						wsk->level_up();
						cout << "\n  Right now you have level: " << wsk ->show_level() << endl;
					}
				}
				else if (nr == 4)
				{
					cout << " \n YOUR ASSASINATION IS SUCCESSED ! YOU WON ! " << endl;
					system("Pause");
					exit(0);
				}
				else if (nr == 5)
				{
					if (wsk->show_level() <= 5) // Na nim mozesz wbic max 3lv. W przyszlosci dodac exp!
					{
						wsk->level_up();
						cout << "\n  Right now you have level: " << wsk->show_level() << endl;
						cout << " You won ! Whats now ? : " << endl;
						cout << " 1). Return to Coloseum ! " << endl << "2). Go DEEPER! " << endl;
						char select;
						cin >> select;
						int bear = select - '0';
						if (bear == 1)
						{
							return 1;
						}

						else if (bear == 2)
						{
							return 6;
						}
					}
				}
				else if (nr == 6)
				{
					if (wsk->show_level() <= 8) // Na nim mozesz wbic max 3lv. W przyszlosci dodac exp!
					{
						wsk->level_up();
						cout << "\n  Right now you have level: " << wsk->show_level() << endl;
						cout << " You won ! Whats now ? : " << endl;
						cout << " 1). Return to Coloseum ! " << endl;
						char select;
						cin >> select;
						int bear = select - '0';
						if (bear == 1)
						{
							return 1;
						}
						else
						{
							return 5;
						}
					}
				}

				cout << " You won ! Whats now ? : " << endl;
				cout << " 1). Return to Coloseum ! " << endl << "2). Go to  Forum_Romanum! " << endl
					<< "3). Go to Piazza_Nuova! " << endl << "4). Go to Senate! " << endl;
				char select;
				cin >> select;
				int bear = select - '0';

				if (bear == 1)
				{
					return 1;
				}

				else if (bear == 2)
				{
					return 2;
				}

				else if (bear == 3)
				{
					return 3;
				}

				else if (bear == 4)
				{
					return 4;
				}
				else
				{
					cout << " \n Wrong button ! You will be transported to Coloseum " << endl;
					return 1;
				}		
			}			
	return 0;
}
