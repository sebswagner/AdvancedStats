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
	for (int i = 0; i < this->playerList.size(); i++) {
		this->teamMinutesPlayed += playerList[i].getMinutesPlayed();
		this->teamFGA += playerList[i].getFieldGoalsMade();
		this->teamFGA += playerList[i].getFieldGoalsAttemtped();
		this->teamThreePM += playerList[i].getThreePointersMade();
		this->teamThreePA += playerList[i].getThreePointersAttemtped();
		this->teamFTM += playerList[i].getFreeThrowsMade();
		this->teamFTA += playerList[i].getFreeThrowsAttemtped();

	}

	this->teamInGameTime = this->teamMinutesPlayed / 60;
	this->teamFGPercentage = this->teamFGM / this->teamFGA;
	this->teamThreePPercentage = this->teamThreePM / this->teamThreePA;
	this->teamFTPercentage = this->teamFTM / this->teamFTA;
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
