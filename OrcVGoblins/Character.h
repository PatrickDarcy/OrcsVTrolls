#pragma once
#include<iostream>

struct Character 
{
	Character() = default;

	virtual int melee1();
	virtual int melee2();
	virtual int melee3();
	virtual int defence1();
	virtual int defence2();

protected:
	int damageMod;
	int defenceMod;
	int health;

};
