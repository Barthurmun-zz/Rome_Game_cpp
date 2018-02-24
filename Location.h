#ifndef _LOCATION_H_
#define _LOCATION_H_

#include <iostream>
#include <string>
#include "Hero.h"

using namespace std;

class Location

{
protected:
	string name;
	string description_l1;
	string description_l2;
	string description_l3;
	string description_l4;
	string description_l5;
	int *table;
public:

	 Location();

	 ~Location();

	 void print_description();
	
	 void set_description(int nr_lini);

	 int master(Hero *wska);

};

#endif // !_LOCATION_H_
