#include"main.h"

using namespace std;

int main()
{
	Player m_player;
	std::cout << "Are you an Orc or a Troll?" << std::endl;
	std::cin >> m_playerClass;

	if (m_playerClass == "orc" || m_playerClass == "Orc")
	{
		PlayerClass::ORC;
		m_player.PlayerChoice = PlayerClass::ORC;
	}
	else if (m_playerClass == "troll" || m_playerClass == "Troll")
	{
		PlayerClass::TROLL;
		m_player.PlayerChoice = PlayerClass::TROLL;
	}

	system("pause");

	return 0;
}