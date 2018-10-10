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
	virtual void playerMove();
	virtual void aiMove();

protected:
	int m_damageMod;
	int m_defenceMod;
	int m_health;

};
