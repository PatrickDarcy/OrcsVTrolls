#pragma once
#include<iostream>
#include"Character.h"


struct Troll : public Character 
{
	Troll();

	int melee1();
	int melee2();
	int melee3();
	int defence1();
	int defence2();
	void playerMove();
	void aiMove();

};