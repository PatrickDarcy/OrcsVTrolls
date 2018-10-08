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
};
std::string m_playerClass = "";