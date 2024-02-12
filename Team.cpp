#pragma once

#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

#include "Player.h"
#include "Team.h"

void Team::addPlayer(const Player& player)
{
	this->playerList.push_back(player);
	
}

void Team::calculateTeamStats()
{
}

void Team::ListAllPlayers()
{
	for (int i = 0; i < this->playerList.size(); i++) {
		cout << playerList[i].getName() << endl;
	}
}

void Team::setOpponentTeamStatistics(int opponentPossessions, int opponentORB, int opponentDRB, int opponentTRB, int opponentFGA, int opponent3PA)
{
	oppPossessions = opponentPossessions;
	oppORB = opponentORB;
	oppDRB = opponentDRB;
	oppTRB = opponentORB + opponentDRB;
	oppFGA = opponentFGA;
	opp3PA = opponent3PA;
}
