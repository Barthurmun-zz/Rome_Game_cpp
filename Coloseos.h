#ifndef _COLOSEOS_H_
#define _COLOSEOS_H_

#include <iostream>
#include <string>
#include "Location.h"
#include "Hero.h"

using namespace std;

class Coloseo : public Location
{
public:
	Coloseo();
	int master(Hero *wska);
	void print_description();
};

class Coloseo_Dungeon1 : public Coloseo
{
public:
	int master(Hero *wska);
};

class Coloseo_Dungeon2 : public Coloseo
{
public:
	int master(Hero *wska);
};

#endif //_COLOSEOS_H_