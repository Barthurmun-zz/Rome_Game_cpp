#ifndef _FORUM_H_
#define _FORUM_H_

#include <iostream>
#include <string>
#include "Location.h"

using namespace std;

#include <iostream>
#include <string>
#include "Location.h"
#include "Hero.h"

using namespace std;

class Forum_Romanum : public Location
{
public:
	Forum_Romanum();
	int master(Hero *wska);
	void print_description();
};

#endif // !_FORUM_H_
