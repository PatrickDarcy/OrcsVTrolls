#pragma once
#include <iostream>
#include <string>
#include"Character.h"
#include"Orc.h"
#include"Troll.h"

enum class PlayerClass {ORC, TROLL};

struct Player
{
	PlayerClass PlayerChoice;

	int currentActiveUnit;
};
/// <summary>
/// playersturn has a combat(ourArray,enemyArray, actionNum, Player & t_player)
/// enemiesturn has a combat(enemyArray, ourArray, actionNum, Player & t_player)
/// if(you win){
/// chooseBuff()
/// playerturn()
/// enemyTunr()
/// increaese enemySize()x4 to win
/// reset numOrc()
/// }
/// else
/// {game over}
/// 
/// </summary>

int const MAX_PLAYER_UNITS(5);
int const MAX_ENEMY_UNITS(20);

std::string m_playerClass = "";
std::string m_enemyClass = "";

Character * playerUnits[MAX_PLAYER_UNITS];
Character * enemyUnits[MAX_ENEMY_UNITS];

Player m_player;
Player m_AI;

int m_playerDmgDone = 0;
int m_enemyDmgDone = 0;
int m_currentPlayer = 4;
int m_currentEnemies = 4;

bool m_lost = false;

void game();
void classChoice();
void introMessage();
void postCombat(int t_playerDmg, int t_enemyDmg);