#ifndef _GAME_H
#define _GAME_H

#include "stdafx.h"

class Game // Tutaj toczy sie cala rozgrywka. WAZNEEEE!!!
{
private:
	static int *memory;
	Game();
	~Game();

public:
	static void fill();
	static void start(); //Rozpoczecie zabawy f.statyczna aby byl dostep zawsze

};

#endif // !_GAME_H
