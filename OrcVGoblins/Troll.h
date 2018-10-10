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
	int playerMove();
	int aiMove();
	int gethealth();

protected:

	int m_moveNum;
	int m_damageMod;
	int m_defenceMod;
};