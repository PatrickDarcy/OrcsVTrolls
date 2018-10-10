#include "Troll.h"

Troll::Troll()
{
}

int Troll::melee1()
{
	return 0;
}

int Troll::melee2()
{
	return 0;
}

int Troll::melee3()
{
	return 0;
}

int Troll::defence1()
{
	return 0;
}

int Troll::defence2()
{
	return 0;
}

int Troll::playerMove()
{
	int dmgOrDef;

	std::cout << "YOU CAN CHOOSE TO ATTACK OR DEFEND. IF YOU ATTACK YOU DEAL " << std::endl;
	std::cout << "DAMAGE TO THE ENEMY BUT IF YOU DEFEND YOU MINUSE THE DAMAGE" << std::endl;
	std::cout << "YOU TAKE" << std::endl;
	std::cout << "YOUR ATTACKS ARE :" << std::endl;
	std::cout << "1) TREE (1D8 DAMGE PLUS STRENGHT MOD)" << std::endl;
	std::cout << "2) FIST (2D4 DAMEGE PLUS STRENGHT MOD)" << std::endl;
	std::cout << "3) FALL (2D6 DAMAGE PLUS STRENGHT MOD)" << std::endl;
	std::cout << "YOUR DEFENCE ARE :" << std::endl;
	std::cout << "4) BRACE (1D8 PLUS YOR DEFENCE MOD TAKEN AWAY FROM DMG)" << std::endl;
	std::cout << "5) WAR CRY (HALF INCOMING DMG)" << std::endl;
	std::cout << "TYPE THE NUMBER OF THE MOVE YOU WANT TO DO: " << std::endl;
	std::cin >> m_moveNum;
	std::cout << "#######################################################" << std::endl;

	if (m_moveNum < 4)
	{
		if (m_moveNum == 1)
		{
			dmgOrDef = melee1();
		}
		else if (m_moveNum == 2)
		{
			dmgOrDef = melee2();
		}
		else if (m_moveNum == 3)
		{
			dmgOrDef = melee3();
		}
	}

	else if (m_moveNum >= 4)
	{
		if (m_moveNum == 4)
		{
			dmgOrDef = -defence1();
		}
		else if (m_moveNum == 5)
		{
			dmgOrDef = -defence2();
		}
	}

	return dmgOrDef;
}

int Troll::aiMove()
{
	return 0;
}
