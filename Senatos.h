#ifndef _SENATO_H_
#define _SENATO_H_

#include <iostream>
#include <string>
#include "Location.h"

using namespace std;

#include <iostream>
#include <string>
#include "Location.h"

#include "Hero.h"

using namespace std;

class Senato: public Location
{
public:
	Senato();
	int master(Hero *wska);
	void print_description();
};

#endif // !_SENATO_H_
