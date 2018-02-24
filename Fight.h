#ifndef _FIGHT_H_
#define _FIGHT_H_
#include "StdAfx.h" //Biblioteka nie potrzebna, ale Visual ja potrzebuje :(
#include <iostream>
#include <string>
#include "Location.h"
#include "Enemy.h"
#include "Hero.h"

using namespace std;

int fight(int nr, Hero *wsk, Enemy *pointer);

#endif // !_FIGHT_H_
