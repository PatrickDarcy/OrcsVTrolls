#include "Orc.h"

Orc::Orc() 
{
	m_health = 10;
	m_damageMod = 5;
	m_defenceMod = 5;
}

int Orc::melee1()
{
	return (rand() % 8 + 1) + m_damageMod;
}

int Orc::melee2()
{
	return 0;
}

int Orc::melee3()
{
	return 0;
}

int Orc::defence1()
{
	return 0;
}

int Orc::defence2()
{
	return 0;
}

void Orc::playerMove()
{
	std::cout << "YOU CAN CHOOSE TO ATTACK OR DEFEND. IF YOU ATTACK YOU DEAL " << std::endl;
	std::cout << "DAMAGE TO THE ENEMY BUT IF YOU DEFEND YOU MINUSE THE DAMAGE" << std::endl;
	std::cout << "YOU TAKE" << std::endl;
	std::cout << "YOUR ATTACKS ARE :" << std::endl;
	std::cout << "1) MACE (1D8 DAMGE PLUS STRENGHT MOD)" << std::endl;
	std::cout << "2) FIST (2D4 DAMEGE PLUS STRENGHT MOD)" << std::endl;
	std::cout << "3) CHARGE (2D6 DAMAGE PLUS STRENGHT MOD)" << std::endl;
	std::cout << "YOUR DEFENCE ARE :" << std::endl;
	std::cout << "4) BRACE (1D8 PLUS YOR DEFENCE MOD TAKEN AWAY FROM DMG)" << std::endl;
	std::cout << "5) WAR CRY (HALF INCOMING DMG)" << std::endl;
	std::cout << "TYPE THE NUMBER OF THE MOVE YOU WANT TO DO: " << std::endl;
	std::cin >> m_moveNum;
	std::cout << "#######################################################" << std::endl;
	
	if (m_moveNum == 1)
	{
		melee1();
	}
	else if (m_moveNum == 2)
	{
		melee2();
	}
	else if (m_moveNum == 3)
	{
		melee3();
	}
	else if (m_moveNum == 4)
	{
		defence1();
	}
	else if (m_moveNum == 5)
	{
		defence2();
	}
}

void Orc::aiMove()
{
}

