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
	int armtSize;
};
/// <summary>
/// intro
/// chooseClass()
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