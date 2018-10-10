#include"main.h"
//loot pool
//comments
//m_ need to be added

using namespace std;

int main()
{
	Character * playerUnits[MAX_PLAYER_UNITS];
	Character * enemyUnits[MAX_ENEMY_UNITS];

	Player m_player;
	Player m_AI;

	std::cout << "Are you an Orc or a Troll?" << std::endl;
	std::cin >> m_playerClass;

	if (m_playerClass == "orc" || m_playerClass == "Orc")
	{
		m_player.PlayerChoice = PlayerClass::ORC;

		for (int i = 0; i < MAX_PLAYER_UNITS; i++)
		{
			playerUnits[i] = new Orc;
		}

		for (int i = 0; i < MAX_ENEMY_UNITS; i++)
		{
			enemyUnits[i] = new Troll;
		}
	}
	else if (m_playerClass == "troll" || m_playerClass == "Troll")
	{
		m_player.PlayerChoice = PlayerClass::TROLL;

		for (int i = 0; i < MAX_PLAYER_UNITS; i++)
		{
			playerUnits[i] = new Troll;
		}

		for (int i = 0; i < MAX_ENEMY_UNITS; i++)
		{
			enemyUnits[i] = new Orc;
		}
	}

	system("pause");

	return 0;
}