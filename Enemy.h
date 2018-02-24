#ifndef _ENEMY_H_
#define _ENEMY_H_

#include <iostream>
#include <string>

using namespace std;

class Enemy

{
public:

	virtual	int atack() =0;

	virtual void get_hitted(int dmg)=0;

	virtual int is_alive()=0;

	virtual	int checkhp()=0;

	virtual string check_name() = 0;

};

#endif // !_ENEMY_H_
