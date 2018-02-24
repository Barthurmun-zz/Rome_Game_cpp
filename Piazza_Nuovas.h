#ifndef _PIAZZA_H_
#define _PIAZZA_H_

#include <iostream>
#include <string>
#include "Location.h"
#include "Hero.h"

using namespace std;

class Piazza_Nuova : public Location
{
public:
	Piazza_Nuova();
	int master(Hero *wska);
	void print_description();
};

#endif //_PIAZZA_H_