#pragma once
#include <string>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

#define TEAM_H

class Team {
	public:
		void addPlayer(const Player& player);
		void calculateTeamStats();
		void ListAllPlayers();

		void setOpponentTeamStatistics(int opponentPossessions, int opponentORB, int opponentDRB, int opponentTRB, int opponentFGA, int opponent3PA);

	private:
		std::vector<Player> playerList;
		
		
		
};