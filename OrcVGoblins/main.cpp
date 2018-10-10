#include"main.h"
//loot pool
//comments
//m_ need to be added

using namespace std;

int main()
{
	while (m_lost == false)
	{
		game();

		std::string continuePlaying = "";

		std::cout << "Do you want to play again ? (Yes or No)" << std::endl;
		std::cin >> continuePlaying;

		if (continuePlaying == "No" || continuePlaying == "no")
		{
			break;
		}
	}

	system("pause");

	return 0;
}

void game()
{
	classChoice();
	introMessage();

	if (m_playerClass == "orc" || m_playerClass == "Orc")
	{
		m_playerDmgDone = playerUnits[0]->playerMove();
	}
	else
	{
		m_playerDmgDone = playerUnits[0]->playerMove();
	}

	if (m_enemyClass == "orc" || m_enemyClass == "Orc")
	{
		m_enemyDmgDone = enemyUnits[0]->playerMove();
	}
	else
	{
		m_enemyDmgDone = enemyUnits[0]->playerMove();
	}

	postCombat(m_playerDmgDone, m_enemyDmgDone);
}

void classChoice()
{
	while (true)
	{
		std::cout << "ARE YOU AN ORC OR TROLL ?" << std::endl;
		std::cin >> m_playerClass;

		if (m_playerClass == "orc" || m_playerClass == "Orc")
		{
			m_player.PlayerChoice = PlayerClass::ORC;
			m_enemyClass = "TROLLS";

			for (int i = 0; i < MAX_PLAYER_UNITS; i++)
			{
				playerUnits[i] = new Orc;
			}

			for (int i = 0; i < MAX_ENEMY_UNITS; i++)
			{
				enemyUnits[i] = new Troll;
			}

			break;
		}
		else if (m_playerClass == "troll" || m_playerClass == "Troll")
		{
			m_player.PlayerChoice = PlayerClass::TROLL;
			m_enemyClass = "ORCS";

			for (int i = 0; i < MAX_PLAYER_UNITS; i++)
			{
				playerUnits[i] = new Troll;
			}

			for (int i = 0; i < MAX_ENEMY_UNITS; i++)
			{
				enemyUnits[i] = new Orc;
			}

			break;
		}
		else
		{
			std::cout << "Incorrect Input" << std::endl;
		}
	}
}

void introMessage()
{
	std::cout << "#######################################################" << std::endl;
	std::cout << "WELCOME COMMANDER THE BATTLE HAS BEGUN WE NEED YOUR" << std::endl;
	std::cout << "EXPERTISE IN DEFEATING THESE " << m_enemyClass << std::endl;
	std::cout << "#######################################################" << std::endl;
}

void postCombat(int t_playerDmg, int t_enemyDmg)
{
	if (t_playerDmg < 0)
	{
		t_enemyDmg += t_playerDmg;
	}
	if (t_enemyDmg < 0)
	{
		t_playerDmg += t_enemyDmg;
	}

	if (playerUnits[m_currentPlayer]->getHealth() < t_enemyDmg)
	{
		m_currentPlayer--;
	}
	if (enemyUnits[m_currentEnemies]->getHealth() < t_playerDmg)
	{
		m_currentEnemies--;
	}
}
