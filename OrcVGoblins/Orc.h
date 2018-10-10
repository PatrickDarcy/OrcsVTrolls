#pragma once
#include <iostream>
#include"Character.h"
#include<time.h>
#include<math.h>

struct Orc : public Character 
{

	Orc();

	int melee1();
	int melee2();
	int melee3();
	int defence1();
	int defence2();
	void playerMove();
	void aiMove();

protected:
	int m_moveNum;
	int m_damageMod;
	int m_defenceMod;
};